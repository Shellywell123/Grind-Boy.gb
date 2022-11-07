#pragma bank 255
// SpriteSheet: trick_kickflip2

#include "gbs_types.h"
#include "data/sprite_trick_kickflip2_tileset.h"

BANKREF(sprite_trick_kickflip2)

#define SPRITE_8_STATE_DEFAULT 0

const metasprite_t sprite_trick_kickflip2_metasprite_0[]  = {
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip2_metasprite_1[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip2_metasprite_2[]  = {
    { 0, 0, 0, 32 }, { 0, 8, 2, 32 },
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip2_metasprite_3[]  = {
    { 0, 8, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip2_metasprite_4[]  = {
    { 0, 0, 4, 32 }, { 0, 8, 6, 32 },
    {metasprite_end}
};

const metasprite_t * const sprite_trick_kickflip2_metasprites[] = {
    sprite_trick_kickflip2_metasprite_0,
    sprite_trick_kickflip2_metasprite_1,
    sprite_trick_kickflip2_metasprite_2,
    sprite_trick_kickflip2_metasprite_0,
    sprite_trick_kickflip2_metasprite_0,
    sprite_trick_kickflip2_metasprite_3,
    sprite_trick_kickflip2_metasprite_1,
    sprite_trick_kickflip2_metasprite_4,
    sprite_trick_kickflip2_metasprite_2
};

const struct animation_t sprite_trick_kickflip2_animations[] = {
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
        .start = 2,
        .end = 2
    },
    {
        .start = 3,
        .end = 4
    },
    {
        .start = 5,
        .end = 6
    },
    {
        .start = 3,
        .end = 4
    },
    {
        .start = 7,
        .end = 8
    }
};

const UWORD sprite_trick_kickflip2_animations_lookup[] = {
    SPRITE_8_STATE_DEFAULT
};

const struct spritesheet_t sprite_trick_kickflip2 = {
    .n_metasprites = 9,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_trick_kickflip2_metasprites,
    .animations = sprite_trick_kickflip2_animations,
    .animations_lookup = sprite_trick_kickflip2_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_trick_kickflip2_tileset),
    .cgb_tileset = { NULL, NULL }
};
