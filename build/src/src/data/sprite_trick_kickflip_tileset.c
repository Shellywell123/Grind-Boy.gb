#pragma bank 255

// Tileset: sprite_trick_kickflip_tileset

#include "gbs_types.h"

BANKREF(sprite_trick_kickflip_tileset)

const struct tileset_t sprite_trick_kickflip_tileset = {
    .n_tiles = 42,
    .tiles = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
        0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x3F, 0x3F, 0x3F, 0x31, 0x3F, 0x21, 0x3F, 0x3F, 0x00, 0x00,
        0x00, 0x00, 0xFE, 0xC6, 0xFF, 0xEF, 0xFF, 0xEF, 0xFF, 0xCF, 0xFF, 0xEF, 0xFF, 0xEF, 0xFE, 0xC6,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0,
        0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00,
        0x00, 0x00, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F,
        0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0xFF, 0x81, 0xFF, 0xC1, 0x3F, 0x23,
        0x3E, 0x3E, 0x08, 0x08, 0x18, 0x18, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xFF, 0xFF,
        0x07, 0x07, 0x04, 0x04, 0x1F, 0x1F, 0x3F, 0x31, 0x1F, 0x18, 0x07, 0x04, 0x07, 0x07, 0x00, 0x00,
        0x00, 0x00, 0x0F, 0x0C, 0x1F, 0x1E, 0x3F, 0x3E, 0x3F, 0x3E, 0x3F, 0x3E, 0x1F, 0x1E, 0x0F, 0x0C,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xE0, 0xE0, 0x70, 0x70, 0x00, 0x00,
        0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x3F, 0x3F, 0x3F, 0x31, 0x3F, 0x21, 0x3F, 0x3F, 0x00, 0x00,
        0x00, 0x00, 0x0E, 0x00, 0x0E, 0x04, 0x0E, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x0C, 0x0C, 0x00, 0x00, 0xF8, 0xF8,
        0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00,
        0x00, 0x00, 0xC0, 0x00, 0xC0, 0x80, 0xC0, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0xFF, 0x81, 0xFF, 0xC1,
        0x3F, 0x23, 0x3E, 0x3E, 0x08, 0x08, 0x18, 0x18, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08, 0xFF, 0xFF,
        0x07, 0x07, 0x04, 0x04, 0x1F, 0x1F, 0x3F, 0x31, 0x7F, 0x78, 0x1F, 0x1C, 0x07, 0x07, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x07, 0x07, 0x1C, 0x1C, 0x30, 0x30, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x0E, 0x0E, 0x00, 0x00, 0x00, 0x00,
        0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x3F, 0x3F, 0x3F, 0x31, 0x3F, 0x21, 0x3F, 0x3F, 0x00, 0x00,
        0x00, 0x00, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xFE, 0xFE,
        0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00,
        0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF,
        0x07, 0x07, 0x04, 0x04, 0x1F, 0x1F, 0x3F, 0x31, 0x1F, 0x18, 0x07, 0x04, 0x07, 0x07, 0x00, 0x00,
        0x00, 0x00, 0x0F, 0x0F, 0x1F, 0x1F, 0x3F, 0x3D, 0x3F, 0x3F, 0x3F, 0x3D, 0x1F, 0x1F, 0x0F, 0x0F,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x70, 0x70, 0xE0, 0xE0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x3F, 0x3F, 0x3F, 0x31, 0x3F, 0x21, 0x3F, 0x3F, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x0E, 0x00, 0x0E, 0x04, 0x0E, 0x00,
        0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0x00, 0xC0, 0x80, 0xC0, 0x00,
        0x07, 0x07, 0x04, 0x04, 0x1F, 0x1F, 0x3F, 0x31, 0x7F, 0x78, 0x1F, 0x1C, 0x07, 0x07, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x1C, 0x1C, 0x07, 0x07, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00
    }
};