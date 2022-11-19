#pragma bank 255
// SpriteSheet: wheel

#include "gbs_types.h"
#include "data/sprite_wheel_tileset.h"

BANKREF(sprite_wheel)

#define SPRITE_1_STATE_DEFAULT 0
#define SPRITE_1_STATE_PUSHING 0
#define SPRITE_1_STATE_KICKFLIP 0
#define SPRITE_1_STATE_SOPPING 0
#define SPRITE_1_STATE_CHARGING 0

const metasprite_t sprite_wheel_metasprite_0[]  = {
    { 0, -8, 0, 32 }, { -16, 0, 2, 32 }, { 16, 8, 4, 32 }, { -16, 0, 6, 32 }, { 16, 8, 8, 32 }, { -16, 0, 10, 32 }, { 16, 8, 0, 0 }, { -16, 0, 0, 64 },
    {metasprite_end}
};

const metasprite_t sprite_wheel_metasprite_1[]  = {
    { 0, -8, 0, 32 }, { -16, 0, 12, 32 }, { 16, 8, 14, 32 }, { -16, 0, 16, 32 }, { 16, 8, 18, 32 }, { -16, 0, 20, 32 }, { 16, 8, 22, 32 }, { -16, 0, 0, 64 },
    {metasprite_end}
};

const metasprite_t sprite_wheel_metasprite_2[]  = {
    { 0, 16, 0, 0 }, { -16, 0, 2, 0 }, { 16, -8, 4, 0 }, { -16, 0, 6, 0 }, { 16, -8, 8, 0 }, { -16, 0, 10, 0 }, { 16, -8, 0, 32 }, { -16, 0, 0, 96 },
    {metasprite_end}
};

const metasprite_t sprite_wheel_metasprite_3[]  = {
    { 0, 16, 0, 0 }, { -16, 0, 12, 0 }, { 16, -8, 14, 0 }, { -16, 0, 16, 0 }, { 16, -8, 18, 0 }, { -16, 0, 20, 0 }, { 16, -8, 22, 0 }, { -16, 0, 0, 96 },
    {metasprite_end}
};

const metasprite_t sprite_wheel_metasprite_4[]  = {
    {metasprite_end}
};

const metasprite_t * const sprite_wheel_metasprites[] = {
    sprite_wheel_metasprite_0,
    sprite_wheel_metasprite_1,
    sprite_wheel_metasprite_2,
    sprite_wheel_metasprite_3,
    sprite_wheel_metasprite_4
};

const struct animation_t sprite_wheel_animations[] = {
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 2,
        .end = 3
    },
    {
        .start = 2,
        .end = 3
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 4,
        .end = 4
    },
    {
        .start = 4,
        .end = 4
    },
    {
        .start = 4,
        .end = 4
    },
    {
        .start = 4,
        .end = 4
    }
};

const UWORD sprite_wheel_animations_lookup[] = {
    SPRITE_1_STATE_DEFAULT
};

const struct spritesheet_t sprite_wheel = {
    .n_metasprites = 5,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = sprite_wheel_metasprites,
    .animations = sprite_wheel_animations,
    .animations_lookup = sprite_wheel_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_wheel_tileset),
    .cgb_tileset = { NULL, NULL }
};
