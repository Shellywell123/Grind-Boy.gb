#pragma bank 255

// Background: level_2

#include "gbs_types.h"
#include "data/bg_level_2_tileset.h"
#include "data/bg_level_2_tilemap.h"
#include "data/bg_level_2_tilemap_attr.h"

BANKREF(bg_level_2)

const struct background_t bg_level_2 = {
    .width = 161,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_level_2_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_level_2_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_level_2_tilemap_attr)
};
