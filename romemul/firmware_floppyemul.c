#include "include/firmware_floppyemul.h"

const uint16_t floppyemulROM[] = {
    0xABCD, 0xEF42, 0x0000, 0x0000, 0x08FA, 0x001E, 0x00FA, 0x001E, 0x5CA6, 0x587A, 0x0000, 0x0022, 0x454D, 0x554C, 0x0000, 0x7E3F,
    0x3F3C, 0x0025, 0x4E4E, 0x548F, 0x51CF, 0xFFF6, 0x4879, 0x000B, 0xFFFF, 0x4E4D, 0x588F, 0x0800, 0x0001, 0x6700, 0x0004, 0x4E75,
    0x4879, 0x00FA, 0x0764, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x3E3C, 0x0003, 0x3F07, 0x4879, 0x00FA, 0x078B, 0x3F3C, 0x0009, 0x4E41,
    0x5C8F, 0x6100, 0x0184, 0x3E1F, 0x4A40, 0x6718, 0x51CF, 0xFFE4, 0x4879, 0x00FA, 0x07A3, 0x3F3C, 0x0009, 0x4E41, 0x3F3C, 0x0007,
    0x4E41, 0x508F, 0x4879, 0x00FA, 0x097D, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x4879, 0x00FA, 0x0802, 0x3F3C, 0x0009, 0x4E41, 0x5C8F,
    0x6100, 0x0166, 0x4A40, 0x6716, 0x4879, 0x00FA, 0x081F, 0x3F3C, 0x0009, 0x4E41, 0x3F3C, 0x0007, 0x4E41, 0x508F, 0x4E75, 0x4879,
    0x00FA, 0x097D, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x4879, 0x00FA, 0x0840, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x6100, 0x0192, 0x4A40,
    0x6716, 0x4879, 0x00FA, 0x0867, 0x3F3C, 0x0009, 0x4E41, 0x3F3C, 0x0007, 0x4E41, 0x508F, 0x4E75, 0x4879, 0x00FA, 0x097D, 0x3F3C,
    0x0009, 0x4E41, 0x5C8F, 0x4879, 0x00FA, 0x07CC, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x6100, 0x01C0, 0x4A40, 0x6716, 0x4879, 0x00FA,
    0x07E5, 0x3F3C, 0x0009, 0x4E41, 0x3F3C, 0x0007, 0x4E41, 0x508F, 0x4E75, 0x4879, 0x00FA, 0x097D, 0x3F3C, 0x0009, 0x4E41, 0x5C8F,
    0x4AB9, 0x00FB, 0x000C, 0x6710, 0x4879, 0x00FA, 0x0892, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x600E, 0x4879, 0x00FA, 0x08B3, 0x3F3C,
    0x0009, 0x4E41, 0x5C8F, 0x4879, 0x00FA, 0x097D, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x4AB9, 0x00FB, 0x0008, 0x6710, 0x4879, 0x00FA,
    0x08FD, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x600E, 0x4879, 0x00FA, 0x08D6, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x4AB9, 0x00FB, 0x0010,
    0x6712, 0x4879, 0x00FA, 0x0923, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x7E00, 0x6010, 0x4879, 0x00FA, 0x0941, 0x3F3C, 0x0009, 0x4E41,
    0x5C8F, 0x7E01, 0x4879, 0x00FA, 0x097D, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x6100, 0x0074, 0x4879, 0x00FA, 0x095C, 0x3F3C, 0x0009,
    0x4E41, 0x5C8F, 0x6000, 0x0096, 0x343C, 0x0008, 0xE54A, 0x3F02, 0x303C, 0x0204, 0x323C, 0x0000, 0x6100, 0x035C, 0x341F, 0x4A40,
    0x6704, 0x51CA, 0xFFEA, 0x4E75, 0x303C, 0x0200, 0x323C, 0x0010, 0x2638, 0x0472, 0x2838, 0x0476, 0x2A38, 0x047E, 0x2C38, 0x00B8,
    0x6100, 0x0334, 0x4E75, 0x21F9, 0x00FB, 0x003A, 0x0472, 0x21F9, 0x00FB, 0x003E, 0x0476, 0x21F9, 0x00FB, 0x0042, 0x047E, 0x21F9,
    0x00FB, 0x0036, 0x00B8, 0x4E75, 0x21FC, 0x00FA, 0x0312, 0x0472, 0x21FC, 0x00FA, 0x0338, 0x0476, 0x21FC, 0x00FA, 0x0394, 0x047E,
    0x4A47, 0x6608, 0x21FC, 0x00FA, 0x03B6, 0x00B8, 0x4E75, 0x303C, 0x0201, 0x323C, 0x0000, 0x6100, 0x02DE, 0x4E75, 0x4278, 0x0446,
    0x4A78, 0x04A6, 0x6708, 0x31FC, 0x0002, 0x04A6, 0x600E, 0x21FC, 0x0000, 0x0001, 0x04C2, 0x31FC, 0x0001, 0x04A6, 0x7000, 0x7201,
    0x3439, 0x00FB, 0x0014, 0x41F9, 0x0000, 0x2000, 0x2F08, 0x6100, 0x0212, 0x225F, 0x2049, 0x323C, 0x00FF, 0x4282, 0xD459, 0x51C9,
    0xFFFC, 0x4AB9, 0x00FB, 0x0008, 0x6602, 0x4E75, 0xB47C, 0x1234, 0x6602, 0x4ED0, 0x4E75, 0x2038, 0x05A0, 0x6700, 0x001A, 0x2040,
    0x2018, 0x6700, 0x0012, 0xB0BC, 0x5F4D, 0x4348, 0x6704, 0x5848, 0x60EE, 0x2618, 0x6002, 0x4283, 0x303C, 0x0205, 0x323C, 0x000C,
    0x283C, 0x00FA, 0x0498, 0x2A3C, 0x00FA, 0x04BC, 0x6100, 0x0248, 0x4E75, 0x302F, 0x0004, 0xB079, 0x00FB, 0x0034, 0x6712, 0xB03C,
    0x0001, 0x6604, 0x426F, 0x0004, 0x2F39, 0x00FB, 0x003A, 0x4E75, 0x203C, 0x00FB, 0x0014, 0x4E75, 0x3E2F, 0x000E, 0xBE79, 0x00FB,
    0x0034, 0x6712, 0xBE3C, 0x0001, 0x6604, 0x426F, 0x000E, 0x2F39, 0x00FB, 0x003E, 0x4E75, 0x51C3, 0x4AAF, 0x0006, 0x6700, 0x0024,
    0x7000, 0x2200, 0x2400, 0x2800, 0x302F, 0x000C, 0x322F, 0x000A, 0x3439, 0x00FB, 0x0014, 0x382F, 0x0004, 0x206F, 0x0006, 0x6100,
    0x0118, 0x4280, 0x4A03, 0x6602, 0x4E75, 0x4FEF, 0x0014, 0x4CDF, 0x00F8, 0x4E73, 0x302F, 0x0004, 0xB079, 0x00FB, 0x0034, 0x6712,
    0xB03C, 0x0001, 0x6604, 0x426F, 0x0004, 0x2F39, 0x00FB, 0x0042, 0x4E75, 0x7000, 0x4E75, 0x204F, 0x0810, 0x0005, 0x6604, 0x4E68,
    0x5D88, 0x4A79, 0x0000, 0x059E, 0x6702, 0x5448, 0x0C68, 0x0008, 0x0006, 0x6758, 0x0C68, 0x0009, 0x0006, 0x6750, 0x0C68, 0x000D,
    0x0006, 0x6710, 0x0C68, 0x000A, 0x0006, 0x6724, 0x2F39, 0x00FB, 0x0036, 0x4E75, 0x0C68, 0x0001, 0x0010, 0x660C, 0x4268, 0x0010,
    0x2F39, 0x00FB, 0x0036, 0x4E75, 0x4280, 0x2140, 0x0008, 0x4E73, 0x0C68, 0x0001, 0x0010, 0x660C, 0x4268, 0x0010, 0x2F39, 0x00FB,
    0x0036, 0x4E75, 0x70FF, 0x42A8, 0x0008, 0x4E73, 0x0C68, 0x0001, 0x0010, 0x660C, 0x4268, 0x0010, 0x2F39, 0x00FB, 0x0036, 0x4E75,
    0x48E7, 0x1F00, 0x4FEF, 0xFFEC, 0x5C88, 0x2F68, 0x0002, 0x0006, 0x3F68, 0x0012, 0x000A, 0x4280, 0x3028, 0x000C, 0x5340, 0x4281,
    0x3228, 0x000E, 0x4282, 0x3428, 0x0010, 0x4284, 0xC2F9, 0x00FB, 0x002A, 0xD041, 0xC4F9, 0x00FB, 0x002C, 0xD042, 0x3F40, 0x000C,
    0x3F7C, 0xFFFF, 0x0004, 0x50C3, 0x0C50, 0x0009, 0x6700, 0xFECA, 0x426F, 0x0004, 0x6000, 0xFEC2, 0x1F38, 0x8E21, 0x0238, 0x0001,
    0x8E21, 0x08B8, 0x0000, 0x8E21, 0x4A44, 0x6600, 0x000A, 0x2248, 0x6100, 0x0010, 0x6006, 0x2848, 0x6100, 0x0016, 0x11DF, 0x8E21,
    0x4E75, 0x5341, 0x6100, 0x0018, 0x5240, 0x51C9, 0xFFF8, 0x4E75, 0x5341, 0x6100, 0x005E, 0x5240, 0x51C9, 0xFFF8, 0x4E75, 0x48A7,
    0xF000, 0x3802, 0x3600, 0x4843, 0x3602, 0x303C, 0x0202, 0x323C, 0x0004, 0x48E7, 0x0880, 0x6100, 0x005E, 0x4CDF, 0x0110, 0x4A40,
    0x661A, 0x227C, 0x00FB, 0x1000, 0xE44C, 0x5344, 0x2608, 0x0803, 0x0000, 0x660E, 0x20D9, 0x51CC, 0xFFFC, 0x4240, 0x4C9F, 0x000F,
    0x4E75, 0x10D9, 0x10D9, 0x10D9, 0x10D9, 0x51CC, 0xFFF6, 0x4240, 0x60EA, 0x48A7, 0xF000, 0x3802, 0x3600, 0x4843, 0x3602, 0x303C,
    0x0203, 0x3202, 0x5841, 0x6100, 0x013C, 0x4A40, 0x6602, 0x4240, 0x4C9F, 0x000F, 0x4E75, 0x205F, 0x2E3C, 0x0000, 0x002A, 0x4AB9,
    0x00FB, 0x000C, 0x6608, 0x2479, 0x0000, 0x04C6, 0x6006, 0x4FEF, 0xFFD6, 0x244F, 0x264A, 0x43F9, 0x00FA, 0x065A, 0xE44F, 0x5347,
    0x24D9, 0x51CF, 0xFFFC, 0x2448, 0x2439, 0x00FB, 0x0004, 0x5841, 0x207C, 0x00FB, 0x0000, 0x4840, 0x1039, 0x00FB, 0xABCD, 0x4840,
    0x2248, 0xD2C0, 0x1011, 0x2008, 0x8041, 0x2240, 0x1011, 0x4A41, 0x6700, 0x009C, 0x2008, 0x8042, 0x2240, 0x1011, 0xB27C, 0x0002,
    0x6700, 0x008C, 0x4842, 0x2008, 0x8042, 0x2240, 0x1011, 0xB27C, 0x0004, 0x6700, 0x007A, 0x2008, 0x8043, 0x2240, 0x1011, 0xB27C,
    0x0006, 0x6700, 0x006A, 0x4843, 0x2008, 0x8043, 0x2240, 0x1011, 0xB27C, 0x0008, 0x6700, 0x0058, 0x2008, 0x8044, 0x2240, 0x1011,
    0xB27C, 0x000A, 0x6700, 0x0048, 0x4844, 0x2008, 0x8044, 0x2240, 0x1011, 0xB27C, 0x000C, 0x6736, 0x2008, 0x8045, 0x2240, 0x1011,
    0xB27C, 0x000E, 0x6728, 0x4845, 0x2008, 0x8045, 0x2240, 0x1011, 0xB27C, 0x0010, 0x6718, 0x2008, 0x8046, 0x2240, 0x1011, 0xB27C,
    0x0012, 0x670A, 0x4846, 0x2008, 0x8046, 0x2240, 0x1011, 0x4842, 0x2E3C, 0x000F, 0xFFFF, 0x7000, 0x4ED3, 0xB4B9, 0x00FB, 0x0000,
    0x6706, 0x5387, 0x66F4, 0x5380, 0x2E3C, 0x0000, 0x0064, 0x5387, 0x66FC, 0x4AB9, 0x00FB, 0x000C, 0x6704, 0x4FEF, 0x002A, 0x4ED2,
    0x4E71, 0x4E71, 0x205F, 0x2E3C, 0x0000, 0x002A, 0x4AB9, 0x00FB, 0x000C, 0x6608, 0x2479, 0x0000, 0x04C6, 0x6006, 0x4FEF, 0xFFD6,
    0x244F, 0x264A, 0x43F9, 0x00FA, 0x073A, 0xE44F, 0x5347, 0x24D9, 0x51CF, 0xFFFC, 0x2448, 0x2439, 0x00FB, 0x0004, 0x5841, 0xE24C,
    0x5344, 0x207C, 0x00FB, 0x0000, 0x4840, 0x1039, 0x00FB, 0xABCD, 0x4840, 0x2248, 0xD2C0, 0x1011, 0x2008, 0x8041, 0x2240, 0x1011,
    0x2008, 0x8042, 0x2240, 0x1011, 0x4842, 0x2008, 0x8042, 0x2240, 0x1011, 0x2008, 0x8043, 0x2240, 0x1011, 0x4843, 0x2008, 0x8043,
    0x2240, 0x1011, 0x200C, 0x0800, 0x0000, 0x6714, 0x161C, 0xE14B, 0x161C, 0x2008, 0x8043, 0x2240, 0x1011, 0x51CC, 0xFFF0, 0x600E,
    0x361C, 0x2008, 0x8043, 0x2240, 0x1011, 0x51CC, 0xFFF4, 0x4842, 0x2E3C, 0x000F, 0xFFFF, 0x7000, 0x4ED3, 0xB4B9, 0x00FB, 0x0000,
    0x6706, 0x5387, 0x66F4, 0x5380, 0x2E3C, 0x0000, 0x0064, 0x5387, 0x66FC, 0x4AB9, 0x00FB, 0x000C, 0x6704, 0x4FEF, 0x002A, 0x4ED2,
    0x4E71, 0x4E71, 0x5369, 0x6465, 0x6361, 0x7254, 0x2046, 0x6C6F, 0x7070, 0x7920, 0x456D, 0x756C, 0x6174, 0x6F72, 0x202D, 0x2076,
    0x302E, 0x302E, 0x380D, 0x0A2B, 0x0D0A, 0x002B, 0x2D20, 0x4C6F, 0x6164, 0x696E, 0x6720, 0x7468, 0x6520, 0x696D, 0x6167, 0x652E,
    0x2E2E, 0x000D, 0x0A53, 0x6964, 0x6563, 0x6172, 0x7420, 0x6572, 0x726F, 0x7220, 0x636F, 0x6D6D, 0x756E, 0x6963, 0x6174, 0x696F,
    0x6E2E, 0x2052, 0x6573, 0x6574, 0x210D, 0x0A00, 0x2B2D, 0x2044, 0x6574, 0x6563, 0x7469, 0x6E67, 0x2068, 0x6172, 0x6477, 0x6172,
    0x652E, 0x2E2E, 0x000D, 0x0A45, 0x7272, 0x6F72, 0x2064, 0x6574, 0x6563, 0x7469, 0x6E67, 0x2068, 0x6172, 0x6477, 0x6172, 0x650D,
    0x0A00, 0x2B2D, 0x2053, 0x6176, 0x696E, 0x6720, 0x7468, 0x6520, 0x6F6C, 0x6420, 0x7665, 0x6374, 0x6F72, 0x732E, 0x2E2E, 0x000D,
    0x0A45, 0x7272, 0x6F72, 0x2073, 0x6176, 0x696E, 0x6720, 0x7468, 0x6520, 0x6F6C, 0x6420, 0x7665, 0x6374, 0x6F72, 0x730D, 0x0A00,
    0x2B2D, 0x2053, 0x6574, 0x7469, 0x6E67, 0x2042, 0x5042, 0x206F, 0x6620, 0x7468, 0x6520, 0x656D, 0x756C, 0x6174, 0x6564, 0x2064,
    0x6973, 0x6B2E, 0x2E2E, 0x000D, 0x0A45, 0x7272, 0x6F72, 0x2073, 0x6574, 0x7469, 0x6E67, 0x2042, 0x5042, 0x206F, 0x6620, 0x7468,
    0x6520, 0x656D, 0x756C, 0x6174, 0x6564, 0x2064, 0x6973, 0x6B0D, 0x0A00, 0x2B2D, 0x2055, 0x7369, 0x6E67, 0x2073, 0x7461, 0x636B,
    0x2061, 0x7320, 0x7465, 0x6D70, 0x2062, 0x7566, 0x6665, 0x722E, 0x2E2E, 0x002B, 0x2D20, 0x5573, 0x696E, 0x6720, 0x5F64, 0x736B,
    0x6275, 0x6620, 0x6173, 0x2074, 0x656D, 0x7020, 0x6275, 0x6666, 0x6572, 0x2E2E, 0x2E00, 0x2B2D, 0x2042, 0x6F6F, 0x7420, 0x7365,
    0x6374, 0x6F72, 0x2065, 0x7865, 0x6375, 0x7469, 0x6F6E, 0x2E2E, 0x2E20, 0x4449, 0x5341, 0x424C, 0x4544, 0x0D0A, 0x002B, 0x2D20,
    0x426F, 0x6F74, 0x2073, 0x6563, 0x746F, 0x7220, 0x6578, 0x6563, 0x7574, 0x696F, 0x6E2E, 0x2E2E, 0x2045, 0x4E41, 0x424C, 0x4544,
    0x0D0A, 0x002B, 0x2D20, 0x496E, 0x7465, 0x7263, 0x6570, 0x7469, 0x6E67, 0x2058, 0x4249, 0x4F53, 0x2074, 0x7261, 0x702E, 0x2E2E,
    0x002B, 0x2D20, 0x4279, 0x7061, 0x7373, 0x696E, 0x6720, 0x5842, 0x494F, 0x5320, 0x7472, 0x6170, 0x2E2E, 0x2E00, 0x2B2D, 0x2042,
    0x6F6F, 0x7469, 0x6E67, 0x2065, 0x6D75, 0x6C61, 0x7465, 0x6420, 0x6469, 0x736B, 0x2E2E, 0x2E0D, 0x0A00, 0x0808, 0x004F, 0x4B0D,
    0x0A00, 0x3508, 0x0034, 0x0800, 0x3308, 0x0032, 0x0800, 0x3108, 0x0030, 0x0800
};
uint16_t floppyemulROM_length = sizeof(floppyemulROM) / sizeof(floppyemulROM[0]);

