#pragma bank 255

// Background: tutorial

#include "gbs_types.h"
#include "data/bg_tutorial_tileset.h"
#include "data/bg_tutorial_tilemap.h"
#include "data/bg_level_menu2_tilemap_attr.h"

BANKREF(bg_tutorial)

const struct background_t bg_tutorial = {
    .width = 50,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_tutorial_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_tutorial_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_level_menu2_tilemap_attr)
};
