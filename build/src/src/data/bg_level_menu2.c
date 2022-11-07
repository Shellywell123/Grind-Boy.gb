#pragma bank 255

// Background: level_menu2

#include "gbs_types.h"
#include "data/bg_level_menu2_tileset.h"
#include "data/bg_level_menu2_tilemap.h"
#include "data/bg_level_menu2_tilemap_attr.h"

BANKREF(bg_level_menu2)

const struct background_t bg_level_menu2 = {
    .width = 50,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_level_menu2_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_level_menu2_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_level_menu2_tilemap_attr)
};
