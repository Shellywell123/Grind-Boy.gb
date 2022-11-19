#pragma bank 255
// SpriteSheet: version1.1

#include "gbs_types.h"
#include "data/sprite_version1_1_tileset.h"

BANKREF(sprite_version1_1)

#define SPRITE_2_STATE_DEFAULT 0
#define SPRITE_2_STATE_PUSHING 0
#define SPRITE_2_STATE_KICKFLIP 0
#define SPRITE_2_STATE_SOPPING 0
#define SPRITE_2_STATE_CHARGING 0

const metasprite_t sprite_version1_1_metasprite_0[]  = {
    {metasprite_end}
};

const metasprite_t sprite_version1_1_metasprite_1[]  = {
    { 0, 16, 0, 0 }, { -16, 0, 2, 0 }, { 16, -8, 4, 0 }, { -16, 0, 6, 0 }, { 16, -8, 8, 0 }, { -16, 0, 10, 0 }, { 16, -8, 12, 0 }, { -16, 0, 14, 0 },
    {metasprite_end}
};

const metasprite_t sprite_version1_1_metasprite_2[]  = {
    { 0, -8, 0, 32 }, { -16, 0, 2, 32 }, { 16, 8, 4, 32 }, { -16, 0, 6, 32 }, { 16, 8, 8, 32 }, { -16, 0, 10, 32 }, { 16, 8, 12, 32 }, { -16, 0, 14, 32 },
    {metasprite_end}
};

const metasprite_t * const sprite_version1_1_metasprites[] = {
    sprite_version1_1_metasprite_0,
    sprite_version1_1_metasprite_1,
    sprite_version1_1_metasprite_2
};

const struct animation_t sprite_version1_1_animations[] = {
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
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    }
};

const UWORD sprite_version1_1_animations_lookup[] = {
    SPRITE_2_STATE_DEFAULT
};

const struct spritesheet_t sprite_version1_1 = {
    .n_metasprites = 3,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = sprite_version1_1_metasprites,
    .animations = sprite_version1_1_animations,
    .animations_lookup = sprite_version1_1_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_version1_1_tileset),
    .cgb_tileset = { NULL, NULL }
};
