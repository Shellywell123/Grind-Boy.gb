#pragma bank 255

// Background: maps\map-macba

#include "gbs_types.h"
#include "data/bg_untitled_copy_copy_tileset.h"
#include "data/bg_untitled_copy_copy_tilemap.h"
#include "data/bg_untitled_copy_copy_tilemap_attr.h"

BANKREF(bg_untitled_copy_copy)

const struct background_t bg_untitled_copy_copy = {
    .width = 182,
    .height = 36,
    .tileset = TO_FAR_PTR_T(bg_untitled_copy_copy_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_untitled_copy_copy_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_untitled_copy_copy_tilemap_attr)
};
