#include "include/firmware_gemdrvemul.h"

const uint16_t gemdrvemulROM[] = {
    0xABCD, 0xEF42, 0x0000, 0x0000, 0x08FA, 0x001E, 0x0000, 0x0000, 0xA1D9, 0x5847, 0x0000, 0x0022, 0x454D, 0x554C, 0x0000, 0x7E3F,
    0x3F3C, 0x0025, 0x4E4E, 0x548F, 0x51CF, 0xFFF6, 0x4879, 0x000B, 0xFFFF, 0x4E4D, 0x588F, 0x0800, 0x0001, 0x6700, 0x0004, 0x4E75,
    0x4879, 0x00FA, 0x09C8, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x4879, 0x00FA, 0x09FC, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x6100, 0x004C,
    0x4A40, 0x6630, 0x4879, 0x00FA, 0x0A18, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x6100, 0x00B2, 0x6100, 0x00BA, 0x4879, 0x00FA, 0x09E8,
    0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x6100, 0x00C2, 0x4A40, 0x6600, 0x0004, 0x4E75, 0x4879, 0x00FA, 0x0A37, 0x3F3C, 0x0009, 0x4E41,
    0x3F3C, 0x0007, 0x4E41, 0x508F, 0x4E75, 0x3E3C, 0x001E, 0x3F07, 0x303C, 0x0400, 0x323C, 0x0000, 0x6100, 0x0720, 0x3E1F, 0x4A40,
    0x6660, 0x0C79, 0xFFFF, 0x00FB, 0x0008, 0x6604, 0x7000, 0x4E75, 0x3007, 0x0280, 0x0000, 0x00FF, 0x80FC, 0x000A, 0x0280, 0x00FF,
    0x00FF, 0x0680, 0x0030, 0x0030, 0x4840, 0x3F00, 0x4840, 0x3F00, 0x3F3C, 0x0002, 0x4E41, 0x588F, 0x3F3C, 0x0002, 0x4E41, 0x588F,
    0x4879, 0x00FA, 0x0A60, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x3C3C, 0x0032, 0x3F3C, 0x0025, 0x4E4E, 0x548F, 0x51CE, 0xFFF6, 0x51CF,
    0xFF8E, 0x70FF, 0x4E75, 0x303C, 0x0404, 0x7200, 0x6100, 0x06AC, 0x4E75, 0x2038, 0x04C2, 0x08C0, 0x0002, 0x21C0, 0x04C2, 0x3F3C,
    0x0002, 0x3F3C, 0x000E, 0x4E41, 0x588F, 0x4E75, 0x2F3C, 0x00FA, 0x0186, 0x3F3C, 0x0021, 0x3F3C, 0x0005, 0x4E4D, 0x508F, 0x2600,
    0x283C, 0x00FA, 0x0182, 0x303C, 0x0401, 0x7208, 0x6100, 0x066C, 0x4A40, 0x6602, 0x4E75, 0x70FF, 0x4E75, 0x5842, 0x5241, 0x5344,
    0x4744, 0x0000, 0x0000, 0x204F, 0x4A79, 0x0000, 0x059E, 0x6702, 0x5448, 0x0810, 0x0005, 0x6604, 0x4E68, 0x5D88, 0x48E7, 0x3F3E,
    0x0839, 0x0000, 0x00FB, 0x000C, 0x6600, 0x05F0, 0x3628, 0x0006, 0xB67C, 0x001A, 0x6776, 0xB67C, 0x0039, 0x6700, 0x0082, 0xB67C,
    0x003A, 0x6700, 0x00C2, 0xB67C, 0x003B, 0x6700, 0x0102, 0xB67C, 0x003C, 0x6700, 0x01D6, 0xB67C, 0x0047, 0x6700, 0x013A, 0xB67C,
    0x003D, 0x6700, 0x015E, 0xB67C, 0x003E, 0x6700, 0x01A2, 0xB67C, 0x003F, 0x6700, 0x0246, 0xB67C, 0x004E, 0x6700, 0x029E, 0xB67C,
    0x004F, 0x6700, 0x0370, 0xB67C, 0x004B, 0x6700, 0x03A4, 0xB67C, 0x0041, 0x6700, 0x01E0, 0x7202, 0x303C, 0x0402, 0x6100, 0x05BC,
    0x4CDF, 0x7CFC, 0x2F39, 0x00FA, 0x0182, 0x4E75, 0x2628, 0x0008, 0x7204, 0x303C, 0x041A, 0x6100, 0x05A2, 0x6000, 0x055E, 0x2868,
    0x0008, 0x303C, 0x0403, 0x7200, 0x6100, 0x0590, 0x3F3C, 0x0019, 0x4E41, 0x548F, 0x2F00, 0x303C, 0x0404, 0x7200, 0x6100, 0x057C,
    0x201F, 0xB07C, 0x0002, 0x6600, 0x0532, 0x303C, 0x0439, 0x2C3C, 0x0000, 0x0100, 0x6100, 0x066C, 0x3039, 0x00FB, 0x04CE, 0x48C0,
    0x4CDF, 0x7CFC, 0x4E73, 0x2868, 0x0008, 0x303C, 0x0403, 0x7200, 0x6100, 0x0548, 0x3F3C, 0x0019, 0x4E41, 0x548F, 0x2F00, 0x303C,
    0x0404, 0x7200, 0x6100, 0x0534, 0x201F, 0xB07C, 0x0002, 0x6600, 0x04EA, 0x303C, 0x043A, 0x2C3C, 0x0000, 0x0100, 0x6100, 0x0624,
    0x3039, 0x00FB, 0x04D0, 0x48C0, 0x4CDF, 0x7CFC, 0x4E73, 0x2868, 0x0008, 0x303C, 0x0403, 0x7200, 0x6100, 0x0500, 0x3F3C, 0x0019,
    0x4E41, 0x548F, 0x2F00, 0x303C, 0x0404, 0x7200, 0x6100, 0x04EC, 0x201F, 0xB07C, 0x0002, 0x6600, 0x04A2, 0x303C, 0x043B, 0x2C3C,
    0x0000, 0x0100, 0x6100, 0x05DC, 0x3039, 0x00FB, 0x00C4, 0x48C0, 0x4CDF, 0x7CFC, 0x4E73, 0x2868, 0x0008, 0x3628, 0x000C, 0x5343,
    0xB67C, 0x0002, 0x6600, 0x0474, 0x303C, 0x0447, 0x2C3C, 0x0000, 0x0100, 0x6100, 0x05AE, 0x303C, 0x0000, 0x48C0, 0x4CDF, 0x7CFC,
    0x4E73, 0x2868, 0x0008, 0x3628, 0x000C, 0x303C, 0x0403, 0x7200, 0x6100, 0x0488, 0x3F3C, 0x0019, 0x4E41, 0x548F, 0x2F00, 0x303C,
    0x0404, 0x7200, 0x6100, 0x0474, 0x201F, 0xB07C, 0x0002, 0x6600, 0x042A, 0x303C, 0x043D, 0x2C3C, 0x0000, 0x0100, 0x6100, 0x0564,
    0x3039, 0x00FB, 0x00C6, 0x48C0, 0x4CDF, 0x7CFC, 0x4E73, 0x3628, 0x0008, 0x7202, 0x303C, 0x043E, 0x6100, 0x0440, 0x3039, 0x00FB,
    0x04CC, 0x48C0, 0x4CDF, 0x7CFC, 0x4E73, 0x2868, 0x0008, 0x3628, 0x000C, 0x303C, 0x0403, 0x7200, 0x6100, 0x0420, 0x3F3C, 0x0019,
    0x4E41, 0x548F, 0x2F00, 0x303C, 0x0404, 0x7200, 0x6100, 0x040C, 0x201F, 0xB07C, 0x0002, 0x6600, 0x03C2, 0x303C, 0x043C, 0x2C3C,
    0x0000, 0x0100, 0x6100, 0x04FC, 0x2039, 0x00FB, 0x05F0, 0x4CDF, 0x7CFC, 0x4E73, 0x2868, 0x0008, 0x303C, 0x0403, 0x7200, 0x6100,
    0x03DA, 0x3F3C, 0x0019, 0x4E41, 0x548F, 0x2F00, 0x303C, 0x0404, 0x7200, 0x6100, 0x03C6, 0x201F, 0xB07C, 0x0002, 0x6600, 0x037C,
    0x303C, 0x0441, 0x2C3C, 0x0000, 0x0100, 0x6100, 0x04B6, 0x2039, 0x00FB, 0x05F4, 0x4CDF, 0x7CFC, 0x4E73, 0x3628, 0x0008, 0x2828,
    0x000A, 0x2868, 0x000E, 0x6106, 0x4CDF, 0x7CFC, 0x4E73, 0x2A04, 0x4286, 0x48E7, 0x1F00, 0x720C, 0x303C, 0x0481, 0x6100, 0x037C,
    0x4CDF, 0x00F8, 0x4A40, 0x6704, 0x70FF, 0x602C, 0x2039, 0x00FB, 0x00C8, 0x48C0, 0x6B22, 0x4A80, 0x671C, 0x2E00, 0x5347, 0x4BF9,
    0x00FB, 0x00CC, 0x18DD, 0x51CF, 0xFFFC, 0xDC80, 0xB07C, 0x0400, 0x6604, 0x9A80, 0x6ABC, 0x2006, 0x4E75, 0x2868, 0x0008, 0x3828,
    0x000C, 0x0C14, 0x0043, 0x6600, 0x02F2, 0x303C, 0x0403, 0x7200, 0x6100, 0x0328, 0x3F3C, 0x002F, 0x4E41, 0x548F, 0x2F00, 0x2F00,
    0x2F0C, 0x303C, 0x0404, 0x7200, 0x6100, 0x0310, 0x285F, 0x261F, 0x2A0C, 0x303C, 0x044E, 0x2C3C, 0x0000, 0x0100, 0x6100, 0x0404,
    0x303C, 0x0403, 0x7200, 0x6100, 0x02F2, 0x4879, 0x00FB, 0x0010, 0x3F3C, 0x003B, 0x4E41, 0x5C8F, 0x303C, 0x0404, 0x7200, 0x6100,
    0x02DA, 0x285F, 0x4A79, 0x00FB, 0x0092, 0x6600, 0x028E, 0x3039, 0x00FB, 0x0090, 0x48C0, 0x4A40, 0x6600, 0x0038, 0x4BF9, 0x00FB,
    0x0094, 0x196D, 0x0015, 0x0015, 0x296D, 0x0016, 0x0016, 0x296D, 0x001A, 0x001A, 0x296D, 0x001E, 0x001E, 0x296D, 0x0022, 0x0022,
    0x296D, 0x0026, 0x0026, 0x396D, 0x002A, 0x002A, 0x4CDF, 0x7CFC, 0x4E73, 0x422C, 0x0015, 0x42AC, 0x0016, 0x42AC, 0x001A, 0x42AC,
    0x001E, 0x42AC, 0x0022, 0x42AC, 0x0026, 0x426C, 0x002A, 0x4CDF, 0x7CFC, 0x4E73, 0x303C, 0x0403, 0x7200, 0x6100, 0x025E, 0x3F3C,
    0x002F, 0x4E41, 0x548F, 0x2F00, 0x2F00, 0x303C, 0x0404, 0x7200, 0x6100, 0x0248, 0x261F, 0x7204, 0x303C, 0x044F, 0x6100, 0x023C,
    0x4A79, 0x00FB, 0x0092, 0x6700, 0xFF5A, 0x201F, 0x6000, 0x01EC, 0x2F08, 0x3628, 0x0008, 0x2868, 0x000A, 0x2A68, 0x000E, 0x2C68,
    0x0012, 0x0C14, 0x0043, 0x6600, 0x01D0, 0x303C, 0x0403, 0x7200, 0x6100, 0x0208, 0x3F3C, 0x0019, 0x4E41, 0x548F, 0x2F00, 0x303C,
    0x0404, 0x7200, 0x6100, 0x01F4, 0x201F, 0xB07C, 0x0002, 0x6600, 0x01A8, 0xB67C, 0x0000, 0x6718, 0xB67C, 0x0003, 0x6600, 0x019A,
    0x4E71, 0x303C, 0x044B, 0x2C3C, 0x0000, 0x0100, 0x6100, 0x02D4, 0x4243, 0x303C, 0x043D, 0x2C3C, 0x0000, 0x0100, 0x6100, 0x02C4,
    0x3039, 0x00FB, 0x00C6, 0x48C0, 0x6B00, 0x017C, 0x3600, 0x283C, 0x0000, 0x001C, 0x9FFC, 0x0000, 0x001C, 0x284F, 0x2F0C, 0x6100,
    0xFE0E, 0x285F, 0xB0BC, 0x0000, 0x001C, 0x6600, 0x0162, 0x0C6C, 0x601A, 0x0000, 0x6600, 0x0158, 0x303C, 0x0484, 0x2C3C, 0x0000,
    0x001C, 0x6100, 0x027E, 0xDFFC, 0x0000, 0x001C, 0x2879, 0x0000, 0x04F2, 0x286C, 0x0028, 0x286C, 0x0000, 0x303C, 0x0483, 0x2C3C,
    0x0000, 0x0100, 0x6100, 0x025C, 0x303C, 0x0403, 0x7200, 0x6100, 0x014A, 0x2057, 0x4868, 0x0012, 0x4868, 0x000E, 0x42A7, 0x3F3C,
    0x0005, 0x3F3C, 0x004B, 0x4E41, 0x4FEF, 0x0010, 0x2840, 0x303C, 0x0404, 0x7200, 0x6100, 0x0124, 0x4BF9, 0x00FB, 0x04D4, 0x262D,
    0x0002, 0x282D, 0x0006, 0x2A2D, 0x000A, 0x2C2D, 0x000E, 0x2E0C, 0x2F07, 0xDEBC, 0x0000, 0x0100, 0x2947, 0x0008, 0x2943, 0x000C,
    0xDE83, 0x2947, 0x0010, 0x2944, 0x0014, 0xDE84, 0x2947, 0x0018, 0x2945, 0x001C, 0x303C, 0x0483, 0x2C3C, 0x0000, 0x0100, 0x6100,
    0x01E2, 0x282D, 0x0002, 0xD8AD, 0x0006, 0xD8AD, 0x000E, 0x2857, 0xD9FC, 0x0000, 0x0100, 0x3639, 0x00FB, 0x00C6, 0x6100, 0xFD30,
    0x3639, 0x00FB, 0x00C6, 0x7202, 0x303C, 0x043E, 0x6100, 0x00AC, 0x3039, 0x00FB, 0x04CC, 0x48C0, 0x6B6C, 0x2A57, 0xDBFC, 0x0000,
    0x0100, 0x220D, 0x2C4D, 0x49F9, 0x00FB, 0x04D4, 0xDBEC, 0x0002, 0xDBEC, 0x0006, 0xDBEC, 0x000E, 0x4A95, 0x671A, 0x7000, 0xDDDD,
    0xD396, 0x101D, 0x6710, 0xB03C, 0x0001, 0x6606, 0xDCFC, 0x00FE, 0x60F0, 0xDCC0, 0x60EA, 0x2857, 0x2A6C, 0x0018, 0x2A2C, 0x001C,
    0x614C, 0x261F, 0x2057, 0x317C, 0x0006, 0x0008, 0x42A8, 0x000A, 0x2143, 0x000E, 0x42A8, 0x0012, 0x588F, 0x4CDF, 0x7CFC, 0x2F39,
    0x00FA, 0x0182, 0x4E75, 0x588F, 0x4CDF, 0x7CFC, 0x4E73, 0xDFFC, 0x0000, 0x001C, 0x3639, 0x00FB, 0x00C6, 0x7202, 0x303C, 0x043E,
    0x6100, 0x0018, 0x3039, 0x00FB, 0x04CC, 0x48C0, 0x60D8, 0x4A85, 0x6706, 0x421D, 0x5385, 0x66FA, 0x4E75, 0x205F, 0x2E3C, 0x0000,
    0x0014, 0x4FEF, 0xFFEC, 0x244F, 0x264A, 0x43F9, 0x00FA, 0x08CE, 0xE44F, 0x5347, 0x24D9, 0x51CF, 0xFFFC, 0x2448, 0x2439, 0x00FB,
    0x0004, 0x5841, 0x207C, 0x00FB, 0x0000, 0x4840, 0x1039, 0x00FB, 0xABCD, 0x4840, 0x2248, 0xD2C0, 0x1011, 0x2008, 0x8041, 0x2240,
    0x1011, 0x4A41, 0x6700, 0x009C, 0x2008, 0x8042, 0x2240, 0x1011, 0xB27C, 0x0002, 0x6700, 0x008C, 0x4842, 0x2008, 0x8042, 0x2240,
    0x1011, 0xB27C, 0x0004, 0x6700, 0x007A, 0x2008, 0x8043, 0x2240, 0x1011, 0xB27C, 0x0006, 0x6700, 0x006A, 0x4843, 0x2008, 0x8043,
    0x2240, 0x1011, 0xB27C, 0x0008, 0x6700, 0x0058, 0x2008, 0x8044, 0x2240, 0x1011, 0xB27C, 0x000A, 0x6700, 0x0048, 0x4844, 0x2008,
    0x8044, 0x2240, 0x1011, 0xB27C, 0x000C, 0x6736, 0x2008, 0x8045, 0x2240, 0x1011, 0xB27C, 0x000E, 0x6728, 0x4845, 0x2008, 0x8045,
    0x2240, 0x1011, 0xB27C, 0x0010, 0x6718, 0x2008, 0x8046, 0x2240, 0x1011, 0xB27C, 0x0012, 0x670A, 0x4846, 0x2008, 0x8046, 0x2240,
    0x1011, 0x4842, 0x2E3C, 0x000F, 0xFFFF, 0x7000, 0x4ED3, 0xB4B9, 0x00FB, 0x0000, 0x6706, 0x5387, 0x66F4, 0x5380, 0x4FEF, 0x0014,
    0x4ED2, 0x205F, 0x2E3C, 0x0000, 0x0014, 0x4FEF, 0xFFEC, 0x244F, 0x264A, 0x43F9, 0x00FA, 0x09B4, 0xE44F, 0x5347, 0x24D9, 0x51CF,
    0xFFFC, 0x2448, 0x2439, 0x00FB, 0x0004, 0x5841, 0xD246, 0x5241, 0xE249, 0xE349, 0x207C, 0x00FB, 0x0000, 0x4840, 0x1039, 0x00FB,
    0xABCD, 0x4840, 0x2248, 0xD2C0, 0x1011, 0x2008, 0x8041, 0x2240, 0x1011, 0x2008, 0x8042, 0x2240, 0x1011, 0x4842, 0x2008, 0x8042,
    0x2240, 0x1011, 0x2008, 0x8043, 0x2240, 0x1011, 0x4843, 0x2008, 0x8043, 0x2240, 0x1011, 0x2008, 0x8044, 0x2240, 0x1011, 0x4844,
    0x2008, 0x8044, 0x2240, 0x1011, 0x2008, 0x8045, 0x2240, 0x1011, 0x4845, 0x2008, 0x8045, 0x2240, 0x1011, 0xE24E, 0x5346, 0x200C,
    0x0800, 0x0000, 0x6714, 0x161C, 0xE14B, 0x161C, 0x2008, 0x8043, 0x2240, 0x1011, 0x51CE, 0xFFF0, 0x600E, 0x361C, 0x2008, 0x8043,
    0x2240, 0x1011, 0x51CE, 0xFFF4, 0x4842, 0x2E3C, 0x000F, 0xFFFF, 0x7000, 0x4ED3, 0xB4B9, 0x00FB, 0x0000, 0x6706, 0x5387, 0x66F4,
    0x5380, 0x4FEF, 0x0014, 0x4ED2, 0x5369, 0x6465, 0x6361, 0x7254, 0x2047, 0x454D, 0x4452, 0x4956, 0x4520, 0x2D20, 0x7630, 0x2E30,
    0x2E31, 0x0D0A, 0x2B0D, 0x0A00, 0x2B2D, 0x2053, 0x6574, 0x2076, 0x6563, 0x746F, 0x7273, 0x2E2E, 0x2E0D, 0x0A00, 0x2B2D, 0x204D,
    0x6F75, 0x6E74, 0x696E, 0x6720, 0x6D69, 0x6372, 0x6F53, 0x4420, 0x6361, 0x7264, 0x2E2E, 0x2E00, 0x0D0A, 0x2B2D, 0x2047, 0x454D,
    0x4452, 0x4956, 0x4520, 0x6472, 0x6976, 0x6572, 0x206C, 0x6F61, 0x6465, 0x642E, 0x0D0A, 0x000D, 0x0A53, 0x6964, 0x6563, 0x6172,
    0x7420, 0x6572, 0x726F, 0x7220, 0x636F, 0x6D6D, 0x756E, 0x6963, 0x6174, 0x696F, 0x6E2E, 0x2052, 0x6573, 0x6574, 0x210D, 0x0A00,
    0x0808, 0x0000, 0x0000, 0x0000
};
uint16_t gemdrvemulROM_length = sizeof(gemdrvemulROM) / sizeof(gemdrvemulROM[0]);
