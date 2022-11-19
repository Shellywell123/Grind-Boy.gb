#pragma bank 255

// Background: titlescreen2

#include "gbs_types.h"
#include "data/sprite_large_skater_titlesc_tileset.h"
#include "data/sprite_large_skater_titlesc_tilemap.h"
#include "data/sprite_large_skater_titlesc_tilemap_attr.h"

BANKREF(sprite_large_skater_titlesc)

const struct background_t sprite_large_skater_titlesc = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(sprite_large_skater_titlesc_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(sprite_large_skater_titlesc_tilemap),
    .cgb_tilemap_attr = TO_FAR_PTR_T(sprite_large_skater_titlesc_tilemap_attr)
};
