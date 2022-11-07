#pragma bank 255

// Background: end

#include "gbs_types.h"
#include "data/bg_end_tileset.h"
#include "data/bg_end_tilemap.h"
#include "data/bg_end_tilemap_attr.h"

BANKREF(bg_end)

const struct background_t bg_end = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_end_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_end_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_end_tilemap_attr)
};
