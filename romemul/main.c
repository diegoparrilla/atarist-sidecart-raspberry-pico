/**
 * File: main.c
 * Author: Diego Parrilla Santamaría
 * Date: July 2023
 * Copyright: 2023 - GOODDATA LABS SL
 * Description: C file that launches the ROM emulator or configurator
 */

#include "include/romloader.h"
#include "include/romemul.h"
#include "include/floppyemul.h"

int main()
{
    // Set the clock frequency. 20% overclocking
    set_sys_clock_khz(RP2040_CLOCK_FREQ_KHZ, true);

    // Configure the input pins for ROM4 and ROM3
    gpio_init(SELECT_GPIO);
    gpio_set_dir(SELECT_GPIO, GPIO_IN);
    gpio_set_pulls(SELECT_GPIO, false, true); // Pull down (false, true)
    gpio_pull_down(SELECT_GPIO);

    // Initialize chosen serial port
    stdio_init_all();
    setvbuf(stdout, NULL, _IONBF, 1); // specify that the stream should be unbuffered

    // Only startup information to display
    printf("Sidecart ROM emulator. %s (%s). %s mode.\n\n", RELEASE_VERSION, RELEASE_DATE, _DEBUG ? "DEBUG" : "RELEASE");

    // Init the CYW43 WiFi module
    if (cyw43_arch_init())
    {
        DPRINTF("Wi-Fi init failed\n");
        return -1;
    }

    // Load the config from FLASH
    load_all_entries();

    ConfigEntry *default_config_entry = find_entry("BOOT_FEATURE");
    DPRINTF("BOOT_FEATURE: %s\n", default_config_entry->value);

    ConfigEntry *default_config_reboot_mode = find_entry("SAFE_CONFIG_REBOOT");
    DPRINTF("SAFE_CONFIG_REBOOT: %s\n", default_config_reboot_mode->value);

    bool safe_config_reboot = default_config_reboot_mode->value[0] == 't' || default_config_reboot_mode->value[0] == 'T';

    // No SELECT button pressed or CONFIGURATOR entry found in config. Normal boot
    if ((gpio_get(5) == 0) && (strcmp(default_config_entry->value, "CONFIGURATOR") != 0))
    {
        DPRINTF("No SELECT button pressed.\n");
        if (strcmp(default_config_entry->value, "ROM_EMULATOR") == 0)
        {
            DPRINTF("No SELECT button pressed. ROM_EMULATOR entry found in config. Launching.\n");

            // Check if Delay ROM emulation (ripper style boot) is true
            ConfigEntry *rom_delay_config_entry = find_entry("DELAY_ROM_EMULATION");
            DPRINTF("DELAY_ROM_EMULATION: %s\n", rom_delay_config_entry->value);
            if ((strcmp(rom_delay_config_entry->value, "true") == 0) || (strcmp(rom_delay_config_entry->value, "TRUE") == 0) || (strcmp(rom_delay_config_entry->value, "T") == 0))
            {
                printf("Delaying ROM emulation.\n"); // Always print this line
                // The "D" character stands for "Delay"
                blink_morse('D');

                // While until the user presses the SELECT button again to launch the ROM emulator
                while (gpio_get(5) == 0)
                {
                    tight_loop_contents();
                    sleep_ms(1000); // Give me a break... to display the message
                }

                DPRINTF("SELECT button pressed.\n");
                // Now wait for the user to release the SELECT button
                while (gpio_get(5) != 0)
                {
                    tight_loop_contents();
                }

                DPRINTF("SELECT button released. Launching ROM emulator.\n");
            }

            // Canonical way to initialize the ROM emulator:
            // No IRQ handler callbacks, copy the FLASH ROMs to RAM, and start the state machine
            init_romemul(NULL, NULL, true);

            printf("ROM Emulation started.\n"); // Always print this line

            // The "E" character stands for "Emulator"
            blink_morse('E');

            bool write_config_only_once = true;
            // Loop forever and block until the state machine put data into the FIFO
            while (true)
            {
                tight_loop_contents();
                sleep_ms(1000); // Give me a break... to display the message
                if (gpio_get(5) != 0)
                {
                    select_button_action(safe_config_reboot, write_config_only_once);
                    // Write config only once to avoid hitting the flash too much
                    write_config_only_once = false;
                }
            }
        }
        if (strcmp(default_config_entry->value, "FLOPPY_EMULATOR") == 0)
        {
            printf("FLOPPY_EMULATOR entry found in config. Launching.\n");

            // Copy the ST floppy firmware emulator to RAM
            copy_floppy_firmware_to_RAM();

            // Reserve memory for the protocol parser
            init_protocol_parser();

            // Hybrid way to initialize the ROM emulator:
            // IRQ handler callback to read the commands in ROM3, and NOT copy the FLASH ROMs to RAM
            // and start the state machine
            init_romemul(NULL, floppyemul_dma_irq_handler_lookup_callback, false);
            DPRINTF("Ready to accept commands.\n");

            // The "F" character stands for "Floppy"
            //            blink_morse('F');

            init_floppyemul(safe_config_reboot);

            // You should never reach this line...
        }

        DPRINTF("You should never see this line...\n");
        return 0;
    }
    else
    {
        DPRINTF("SELECT button pressed. Launch configurator.\n");

        // Keep in development mode
        if (strcmp(default_config_entry->value, "CONFIGURATOR") != 0)
        {
            put_string("BOOT_FEATURE", "CONFIGURATOR");
            write_all_entries();
        }
        network_init();

        // Print the config
        print_config_table();

        // Should not write if not necessary
        // Delete FLASH ROMs
        //        delete_FLASH();

        // Copy the firmware to RAM
        copy_firmware_to_RAM();

        // Reserve memory for the protocol parser
        init_protocol_parser();

        // Hybrid way to initialize the ROM emulator:
        // IRQ handler callback to read the commands in ROM3, and NOT copy the FLASH ROMs to RAM
        // and start the state machine
        init_romemul(NULL, dma_irq_handler_lookup_callback, false);

        DPRINTF("Ready to accept commands.\n");

        init_firmware();

        // Now the user needs to reset or poweroff the board to load the ROMs
        DPRINTF("Rebooting the board.\n");
        sleep_ms(1000); // Give me a break... to display the message

        watchdog_reboot(0, SRAM_END, 10);
        while (1)
            ;
        return 0;
    }
}
