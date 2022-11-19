#pragma bank 255

// Palette: 0

#include "gbs_types.h"

BANKREF(palette_0)

const struct palette_t palette_0 = {
    .mask = 0xFF,
    .palette = {
        DMG_PALETTE(DMG_WHITE, DMG_LITE_GRAY, DMG_DARK_GRAY, DMG_BLACK)
    },
    .cgb_palette = {
        CGB_PALETTE(RGB(28, 31, 20), RGB(15, 25, 7), RGB(9, 17, 3), RGB(1, 4, 9)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(22, 22, 22), RGB(9, 9, 9), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(22, 22, 22), RGB(9, 9, 9), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(22, 22, 22), RGB(9, 9, 9), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(22, 22, 22), RGB(9, 9, 9), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(22, 22, 22), RGB(9, 9, 9), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(29, 31, 28), RGB(22, 30, 17), RGB(10, 19, 15), RGB(4, 5, 10)),
        CGB_PALETTE(RGB(31, 31, 23), RGB(18, 25, 25), RGB(9, 13, 15), RGB(1, 4, 9))
    }
};
