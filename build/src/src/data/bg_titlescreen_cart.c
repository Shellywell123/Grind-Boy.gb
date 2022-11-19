#pragma bank 255

// Background: titlescreen_cart

#include "gbs_types.h"
#include "data/bg_titlescreen_cart_tileset.h"
#include "data/bg_titlescreen_cart_tilemap.h"
#include "data/bg_titlescreen_cart_tilemap_attr.h"

BANKREF(bg_titlescreen_cart)

const struct background_t bg_titlescreen_cart = {
    .width = 20,
    .height = 50,
    .tileset = TO_FAR_PTR_T(bg_titlescreen_cart_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_titlescreen_cart_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(bg_titlescreen_cart_tilemap_attr)
};
