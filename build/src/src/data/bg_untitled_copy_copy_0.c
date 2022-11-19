#pragma bank 255

// Background: maps\map-southbank

#include "gbs_types.h"
#include "data/bg_untitled_copy_copy_0_tileset.h"
#include "data/bg_untitled_copy_copy_0_tilemap.h"
#include "data/bg_untitled_copy_copy_copy_tilemap_attr.h"

BANKREF(bg_untitled_copy_copy_0)

const struct background_t bg_untitled_copy_copy_0 = {
    .width = 182,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_untitled_copy_copy_0_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_untitled_copy_copy_0_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_untitled_copy_copy_copy_tilemap_attr)
};
