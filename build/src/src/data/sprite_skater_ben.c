#pragma bank 255
// SpriteSheet: skater_ben

#include "gbs_types.h"
#include "data/sprite_skater_ben_tileset.h"

BANKREF(sprite_skater_ben)

#define SPRITE_4_STATE_DEFAULT 0

const metasprite_t sprite_skater_ben_metasprite_0[]  = {
    {metasprite_end}
};

const metasprite_t sprite_skater_ben_metasprite_1[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t sprite_skater_ben_metasprite_2[]  = {
    { 0, 0, 0, 32 }, { 0, 8, 2, 32 },
    {metasprite_end}
};

const metasprite_t sprite_skater_ben_metasprite_3[]  = {
    { 0, 8, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t sprite_skater_ben_metasprite_4[]  = {
    { 0, 0, 4, 32 }, { 0, 8, 6, 32 },
    {metasprite_end}
};

const metasprite_t * const sprite_skater_ben_metasprites[] = {
    sprite_skater_ben_metasprite_0,
    sprite_skater_ben_metasprite_1,
    sprite_skater_ben_metasprite_2,
    sprite_skater_ben_metasprite_0,
    sprite_skater_ben_metasprite_0,
    sprite_skater_ben_metasprite_3,
    sprite_skater_ben_metasprite_1,
    sprite_skater_ben_metasprite_4,
    sprite_skater_ben_metasprite_2
};

const struct animation_t sprite_skater_ben_animations[] = {
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

const UWORD sprite_skater_ben_animations_lookup[] = {
    SPRITE_4_STATE_DEFAULT
};

const struct spritesheet_t sprite_skater_ben = {
    .n_metasprites = 9,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_skater_ben_metasprites,
    .animations = sprite_skater_ben_animations,
    .animations_lookup = sprite_skater_ben_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = 0
    },
    .tileset = TO_FAR_PTR_T(sprite_skater_ben_tileset),
    .cgb_tileset = { NULL, NULL }
};
