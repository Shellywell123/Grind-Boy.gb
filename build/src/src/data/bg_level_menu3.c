#pragma bank 255

// Background: level_menu3

#include "gbs_types.h"
#include "data/bg_level_menu3_tileset.h"
#include "data/bg_level_menu3_tilemap.h"
#include "data/bg_level_menu3_tilemap_attr.h"

BANKREF(bg_level_menu3)

const struct background_t bg_level_menu3 = {
    .width = 60,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_level_menu3_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_level_menu3_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_level_menu3_tilemap_attr)
};
