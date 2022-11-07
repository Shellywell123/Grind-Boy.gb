#pragma bank 255
// SpriteSheet: large_skater\stopping

#include "gbs_types.h"
#include "data/sprite_large_skater_stoppin_tileset.h"

BANKREF(sprite_large_skater_stoppin)

#define SPRITE_11_STATE_DEFAULT 0

const metasprite_t sprite_large_skater_stoppin_metasprite_0[]  = {
    {metasprite_end}
};

const metasprite_t sprite_large_skater_stoppin_metasprite_1[]  = {
    { -16, 18, 0, 0 }, { 16, -8, 2, 0 }, { -16, 0, 4, 0 }, { 16, -8, 6, 0 }, { -16, 0, 8, 0 }, { 16, -8, 10, 0 }, { -16, 0, 12, 0 },
    {metasprite_end}
};

const metasprite_t sprite_large_skater_stoppin_metasprite_2[]  = {
    { -16, -10, 0, 32 }, { 16, 8, 2, 32 }, { -16, 0, 4, 32 }, { 16, 8, 6, 32 }, { -16, 0, 8, 32 }, { 16, 8, 10, 32 }, { -16, 0, 12, 32 },
    {metasprite_end}
};

const metasprite_t * const sprite_large_skater_stoppin_metasprites[] = {
    sprite_large_skater_stoppin_metasprite_0,
    sprite_large_skater_stoppin_metasprite_1,
    sprite_large_skater_stoppin_metasprite_1,
    sprite_large_skater_stoppin_metasprite_2,
    sprite_large_skater_stoppin_metasprite_2
};

const struct animation_t sprite_large_skater_stoppin_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 1,
        .end = 2
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 3,
        .end = 4
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 1,
        .end = 1
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 3,
        .end = 3
    }
};

const UWORD sprite_large_skater_stoppin_animations_lookup[] = {
    SPRITE_11_STATE_DEFAULT
};

const struct spritesheet_t sprite_large_skater_stoppin = {
    .n_metasprites = 5,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = sprite_large_skater_stoppin_metasprites,
    .animations = sprite_large_skater_stoppin_animations,
    .animations_lookup = sprite_large_skater_stoppin_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_large_skater_stoppin_tileset),
    .cgb_tileset = { NULL, NULL }
};
