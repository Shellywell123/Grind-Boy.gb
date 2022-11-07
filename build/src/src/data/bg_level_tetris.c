#pragma bank 255

// Background: level_tetris

#include "gbs_types.h"
#include "data/bg_level_tetris_tileset.h"
#include "data/bg_level_tetris_tilemap.h"
#include "data/bg_level_tetris_tilemap_attr.h"

BANKREF(bg_level_tetris)

const struct background_t bg_level_tetris = {
    .width = 20,
    .height = 252,
    .tileset = TO_FAR_PTR_T(bg_level_tetris_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_level_tetris_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_level_tetris_tilemap_attr)
};
