#pragma bank 255

// Background: level_pacman

#include "gbs_types.h"
#include "data/bg_level_pacman_tileset.h"
#include "data/bg_level_pacman_tilemap.h"
#include "data/bg_level_pacman_tilemap_attr.h"

BANKREF(bg_level_pacman)

const struct background_t bg_level_pacman = {
    .width = 80,
    .height = 70,
    .tileset = TO_FAR_PTR_T(bg_level_pacman_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_level_pacman_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_level_pacman_tilemap_attr)
};
