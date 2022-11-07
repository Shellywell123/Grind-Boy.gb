#pragma bank 255

// Background: credits

#include "gbs_types.h"
#include "data/bg_credits_tileset.h"
#include "data/bg_credits_tilemap.h"
#include "data/bg_credits_tilemap_attr.h"

BANKREF(bg_credits)

const struct background_t bg_credits = {
    .width = 20,
    .height = 55,
    .tileset = TO_FAR_PTR_T(bg_credits_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_credits_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_credits_tilemap_attr)
};
