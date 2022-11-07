#pragma bank 255
// SpriteSheet: pac\skater_pac

#include "gbs_types.h"
#include "data/sprite_pac_skater_pac_tileset.h"

BANKREF(sprite_pac_skater_pac)

#define SPRITE_0_STATE_DEFAULT 0

const metasprite_t sprite_pac_skater_pac_metasprite_0[]  = {
    {metasprite_end}
};

const metasprite_t sprite_pac_skater_pac_metasprite_1[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t sprite_pac_skater_pac_metasprite_2[]  = {
    { 0, 0, 0, 32 }, { 0, 8, 2, 32 },
    {metasprite_end}
};

const metasprite_t sprite_pac_skater_pac_metasprite_3[]  = {
    { 0, 8, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t sprite_pac_skater_pac_metasprite_4[]  = {
    { 0, 0, 4, 32 }, { 0, 8, 6, 32 },
    {metasprite_end}
};

const metasprite_t * const sprite_pac_skater_pac_metasprites[] = {
    sprite_pac_skater_pac_metasprite_0,
    sprite_pac_skater_pac_metasprite_1,
    sprite_pac_skater_pac_metasprite_2,
    sprite_pac_skater_pac_metasprite_0,
    sprite_pac_skater_pac_metasprite_0,
    sprite_pac_skater_pac_metasprite_3,
    sprite_pac_skater_pac_metasprite_1,
    sprite_pac_skater_pac_metasprite_4,
    sprite_pac_skater_pac_metasprite_2
};

const struct animation_t sprite_pac_skater_pac_animations[] = {
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

const UWORD sprite_pac_skater_pac_animations_lookup[] = {
    SPRITE_0_STATE_DEFAULT
};

const struct spritesheet_t sprite_pac_skater_pac = {
    .n_metasprites = 9,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_pac_skater_pac_metasprites,
    .animations = sprite_pac_skater_pac_animations,
    .animations_lookup = sprite_pac_skater_pac_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_pac_skater_pac_tileset),
    .cgb_tileset = { NULL, NULL }
};
