#pragma bank 255
// SpriteSheet: large_skater\pushing

#include "gbs_types.h"
#include "data/sprite_large_skater_pushing_tileset.h"

BANKREF(sprite_large_skater_pushing)

#define SPRITE_9_STATE_DEFAULT 0

const metasprite_t sprite_large_skater_pushing_metasprite_0[]  = {
    {metasprite_end}
};

const metasprite_t sprite_large_skater_pushing_metasprite_1[]  = {
    { 0, 16, 0, 0 }, { 0, -8, 2, 0 }, { -16, 0, 4, 0 }, { 16, -8, 6, 0 }, { -16, 0, 8, 0 }, { 16, -8, 10, 0 }, { -16, 0, 12, 0 },
    {metasprite_end}
};

const metasprite_t sprite_large_skater_pushing_metasprite_2[]  = {
    { 0, -8, 0, 32 }, { 0, 8, 2, 32 }, { -16, 0, 4, 32 }, { 16, 8, 6, 32 }, { -16, 0, 8, 32 }, { 16, 8, 10, 32 }, { -16, 0, 12, 32 },
    {metasprite_end}
};

const metasprite_t sprite_large_skater_pushing_metasprite_3[]  = {
    { 0, 16, 14, 0 }, { 0, -8, 16, 0 }, { -16, 0, 18, 0 }, { 16, -8, 20, 0 }, { -16, 0, 22, 0 }, { 16, -8, 24, 0 }, { -16, 0, 26, 0 },
    {metasprite_end}
};

const metasprite_t sprite_large_skater_pushing_metasprite_4[]  = {
    { 0, 16, 0, 0 }, { 0, -8, 28, 0 }, { -16, 0, 30, 0 }, { 16, -8, 32, 0 }, { -16, 0, 34, 0 }, { 16, -8, 36, 0 }, { -16, 0, 38, 0 },
    {metasprite_end}
};

const metasprite_t sprite_large_skater_pushing_metasprite_5[]  = {
    { 0, 16, 40, 0 }, { -16, 0, 42, 0 }, { 16, -8, 44, 0 }, { -16, 0, 46, 0 }, { 16, -8, 48, 0 }, { -16, 0, 50, 0 }, { 16, -8, 52, 0 }, { -16, 0, 54, 0 },
    {metasprite_end}
};

const metasprite_t sprite_large_skater_pushing_metasprite_6[]  = {
    { 0, -8, 14, 32 }, { 0, 8, 16, 32 }, { -16, 0, 18, 32 }, { 16, 8, 20, 32 }, { -16, 0, 22, 32 }, { 16, 8, 24, 32 }, { -16, 0, 26, 32 },
    {metasprite_end}
};

const metasprite_t sprite_large_skater_pushing_metasprite_7[]  = {
    { 0, -8, 0, 32 }, { 0, 8, 28, 32 }, { -16, 0, 30, 32 }, { 16, 8, 32, 32 }, { -16, 0, 34, 32 }, { 16, 8, 36, 32 }, { -16, 0, 38, 32 },
    {metasprite_end}
};

const metasprite_t sprite_large_skater_pushing_metasprite_8[]  = {
    { 0, -8, 40, 32 }, { -16, 0, 42, 32 }, { 16, 8, 44, 32 }, { -16, 0, 46, 32 }, { 16, 8, 48, 32 }, { -16, 0, 50, 32 }, { 16, 8, 52, 32 }, { -16, 0, 54, 32 },
    {metasprite_end}
};

const metasprite_t * const sprite_large_skater_pushing_metasprites[] = {
    sprite_large_skater_pushing_metasprite_0,
    sprite_large_skater_pushing_metasprite_1,
    sprite_large_skater_pushing_metasprite_2,
    sprite_large_skater_pushing_metasprite_3,
    sprite_large_skater_pushing_metasprite_1,
    sprite_large_skater_pushing_metasprite_4,
    sprite_large_skater_pushing_metasprite_5,
    sprite_large_skater_pushing_metasprite_6,
    sprite_large_skater_pushing_metasprite_2,
    sprite_large_skater_pushing_metasprite_7,
    sprite_large_skater_pushing_metasprite_8
};

const struct animation_t sprite_large_skater_pushing_animations[] = {
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
        .start = 3,
        .end = 6
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 7,
        .end = 10
    }
};

const UWORD sprite_large_skater_pushing_animations_lookup[] = {
    SPRITE_9_STATE_DEFAULT
};

const struct spritesheet_t sprite_large_skater_pushing = {
    .n_metasprites = 11,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = sprite_large_skater_pushing_metasprites,
    .animations = sprite_large_skater_pushing_animations,
    .animations_lookup = sprite_large_skater_pushing_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_large_skater_pushing_tileset),
    .cgb_tileset = { NULL, NULL }
};
