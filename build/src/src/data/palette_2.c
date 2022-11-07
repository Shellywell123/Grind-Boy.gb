#pragma bank 255

// Palette: 2

#include "gbs_types.h"

BANKREF(palette_2)

const struct palette_t palette_2 = {
    .mask = 0xFF,
    .palette = {
        DMG_PALETTE(DMG_WHITE, DMG_LITE_GRAY, DMG_DARK_GRAY, DMG_BLACK)
    },
    .cgb_palette = {
        CGB_PALETTE(RGB(13, 26, 31), RGB(13, 31, 1), RGB(23, 14, 1), RGB(4, 5, 10)),
        CGB_PALETTE(RGB(25, 29, 31), RGB(30, 30, 30), RGB(6, 17, 22), RGB(4, 5, 10)),
        CGB_PALETTE(RGB(25, 29, 31), RGB(22, 30, 17), RGB(11, 15, 15), RGB(4, 5, 10)),
        CGB_PALETTE(RGB(23, 26, 26), RGB(27, 16, 27), RGB(16, 0, 20), RGB(1, 4, 9)),
        CGB_PALETTE(RGB(29, 31, 28), RGB(22, 30, 17), RGB(10, 19, 15), RGB(4, 5, 10)),
        CGB_PALETTE(RGB(31, 27, 22), RGB(15, 24, 15), RGB(13, 17, 8), RGB(1, 4, 9)),
        CGB_PALETTE(RGB(29, 31, 28), RGB(22, 30, 17), RGB(10, 19, 15), RGB(4, 5, 10)),
        CGB_PALETTE(RGB(31, 31, 23), RGB(18, 25, 25), RGB(9, 13, 15), RGB(1, 4, 9))
    }
};