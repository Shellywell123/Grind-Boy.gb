#pragma bank 255

// Background: level_mario2

#include "gbs_types.h"
#include "data/bg_level_mario2_tileset.h"
#include "data/bg_level_mario2_tilemap.h"
#include "data/bg_level_mario2_tilemap_attr.h"

BANKREF(bg_level_mario2)

const struct background_t bg_level_mario2 = {
    .width = 160,
    .height = 22,
    .tileset = TO_FAR_PTR_T(bg_level_mario2_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_level_mario2_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_level_mario2_tilemap_attr)
};
