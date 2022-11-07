#pragma bank 255
// SpriteSheet: trick_kickflip

#include "gbs_types.h"
#include "data/sprite_trick_kickflip_tileset.h"

BANKREF(sprite_trick_kickflip)

#define SPRITE_7_STATE_DEFAULT 0

const metasprite_t sprite_trick_kickflip_metasprite_0[]  = {
    { 0, -8, 0, 32 }, { 0, 8, 2, 32 }, { -16, 0, 4, 32 }, { 16, 8, 6, 32 }, { -16, 0, 8, 32 }, { 16, 8, 10, 32 }, { -16, 0, 12, 32 },
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip_metasprite_1[]  = {
    { -1, -8, 14, 32 }, { 0, 8, 16, 32 }, { -16, 0, 18, 32 }, { 16, 8, 20, 32 }, { -16, 0, 22, 32 }, { 16, 8, 24, 32 }, { -16, 0, 26, 32 },
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip_metasprite_2[]  = {
    { 0, -8, 0, 32 }, { 0, 8, 28, 32 }, { -16, 0, 4, 32 }, { 16, 8, 30, 32 }, { -16, 0, 8, 32 }, { 16, 8, 32, 32 }, { -16, 0, 12, 32 },
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip_metasprite_3[]  = {
    { 0, -8, 34, 32 }, { 0, 8, 36, 32 }, { -16, 0, 18, 32 }, { 16, 8, 38, 32 }, { -16, 0, 22, 32 }, { 16, 8, 40, 32 }, { -16, 0, 26, 32 },
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip_metasprite_4[]  = {
    { 0, 16, 0, 0 }, { 0, -8, 2, 0 }, { -16, 0, 4, 0 }, { 16, -8, 6, 0 }, { -16, 0, 8, 0 }, { 16, -8, 10, 0 }, { -16, 0, 12, 0 },
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip_metasprite_5[]  = {
    { 0, 16, 14, 0 }, { 0, -8, 16, 0 }, { -16, 0, 18, 0 }, { 16, -8, 20, 0 }, { -16, 0, 22, 0 }, { 16, -8, 24, 0 }, { -16, 0, 26, 0 },
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip_metasprite_6[]  = {
    { 0, 16, 0, 0 }, { 0, -8, 28, 0 }, { -16, 0, 4, 0 }, { 16, -8, 30, 0 }, { -16, 0, 8, 0 }, { 16, -8, 32, 0 }, { -16, 0, 12, 0 },
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip_metasprite_7[]  = {
    { 0, 16, 34, 0 }, { 0, -8, 36, 0 }, { -16, 0, 18, 0 }, { 16, -8, 38, 0 }, { -16, 0, 22, 0 }, { 16, -8, 40, 0 }, { -16, 0, 26, 0 },
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip_metasprite_8[]  = {
    { -1, 16, 14, 0 }, { 0, -8, 16, 0 }, { -16, 0, 18, 0 }, { 16, -8, 20, 0 }, { -16, 0, 22, 0 }, { 16, -8, 24, 0 }, { -16, 0, 26, 0 },
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip_metasprite_9[]  = {
    { 0, -8, 14, 32 }, { 0, 8, 16, 32 }, { -16, 0, 18, 32 }, { 16, 8, 20, 32 }, { -16, 0, 22, 32 }, { 16, 8, 24, 32 }, { -16, 0, 26, 32 },
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip_metasprite_10[]  = {
    { 0, 0, 4, 0 },
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip_metasprite_11[]  = {
    { 0, 8, 8, 0 }, { 0, -8, 12, 0 },
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip_metasprite_12[]  = {
    { 0, 0, 18, 0 },
    {metasprite_end}
};

const metasprite_t sprite_trick_kickflip_metasprite_13[]  = {
    { 0, 8, 22, 0 }, { 0, -8, 26, 0 },
    {metasprite_end}
};

const metasprite_t * const sprite_trick_kickflip_metasprites[] = {
    sprite_trick_kickflip_metasprite_0,
    sprite_trick_kickflip_metasprite_1,
    sprite_trick_kickflip_metasprite_2,
    sprite_trick_kickflip_metasprite_3,
    sprite_trick_kickflip_metasprite_4,
    sprite_trick_kickflip_metasprite_5,
    sprite_trick_kickflip_metasprite_6,
    sprite_trick_kickflip_metasprite_7,
    sprite_trick_kickflip_metasprite_4,
    sprite_trick_kickflip_metasprite_8,
    sprite_trick_kickflip_metasprite_6,
    sprite_trick_kickflip_metasprite_7,
    sprite_trick_kickflip_metasprite_0,
    sprite_trick_kickflip_metasprite_9,
    sprite_trick_kickflip_metasprite_2,
    sprite_trick_kickflip_metasprite_3,
    sprite_trick_kickflip_metasprite_10,
    sprite_trick_kickflip_metasprite_11,
    sprite_trick_kickflip_metasprite_12,
    sprite_trick_kickflip_metasprite_13
};

const struct animation_t sprite_trick_kickflip_animations[] = {
    {
        .start = 0,
        .end = 3
    },
    {
        .start = 4,
        .end = 7
    },
    {
        .start = 8,
        .end = 11
    },
    {
        .start = 12,
        .end = 15
    },
    {
        .start = 16,
        .end = 17
    },
    {
        .start = 4,
        .end = 7
    },
    {
        .start = 18,
        .end = 19
    },
    {
        .start = 12,
        .end = 15
    }
};

const UWORD sprite_trick_kickflip_animations_lookup[] = {
    SPRITE_7_STATE_DEFAULT
};

const struct spritesheet_t sprite_trick_kickflip = {
    .n_metasprites = 20,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = sprite_trick_kickflip_metasprites,
    .animations = sprite_trick_kickflip_animations,
    .animations_lookup = sprite_trick_kickflip_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 31,
        .top = -24
    },
    .tileset = TO_FAR_PTR_T(sprite_trick_kickflip_tileset),
    .cgb_tileset = { NULL, NULL }
};
