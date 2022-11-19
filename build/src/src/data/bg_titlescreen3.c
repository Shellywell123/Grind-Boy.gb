#pragma bank 255

// Background: titlescreen3

#include "gbs_types.h"
#include "data/bg_titlescreen3_tileset.h"
#include "data/bg_titlescreen3_tilemap.h"
#include "data/bg_titlescreen3_tilemap_attr.h"

BANKREF(bg_titlescreen3)

const struct background_t bg_titlescreen3 = {
    .width = 53,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_titlescreen3_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_titlescreen3_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_titlescreen3_tilemap_attr)
};
