#pragma bank 255

// Background: tutorial2

#include "gbs_types.h"
#include "data/bg_tutorial2_tileset.h"
#include "data/bg_tutorial2_tilemap.h"
#include "data/bg_level_menu3_tilemap_attr.h"

BANKREF(bg_tutorial2)

const struct background_t bg_tutorial2 = {
    .width = 60,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_tutorial2_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_tutorial2_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_level_menu3_tilemap_attr)
};
