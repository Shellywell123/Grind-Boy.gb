#pragma bank 255

// Background: level_menu

#include "gbs_types.h"
#include "data/bg_level_menu_tileset.h"
#include "data/bg_level_menu_tilemap.h"
#include "data/bg_level_menu_tilemap_attr.h"

BANKREF(bg_level_menu)

const struct background_t bg_level_menu = {
    .width = 71,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_level_menu_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_level_menu_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_level_menu_tilemap_attr)
};
