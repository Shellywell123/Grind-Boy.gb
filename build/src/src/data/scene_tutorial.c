#pragma bank 255

// Scene: tutorial

#include "gbs_types.h"
#include "data/bg_tutorial.h"
#include "data/scene_tutorial_collisions.h"
#include "data/palette_10.h"
#include "data/palette_12.h"
#include "data/sprite_large_skater_skater_.h"
#include "data/scene_tutorial_triggers.h"
#include "data/scene_tutorial_init.h"

BANKREF(scene_tutorial)

const struct scene_t scene_tutorial = {
    .width = 50,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(bg_tutorial),
    .collisions = TO_FAR_PTR_T(scene_tutorial_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_10),
    .sprite_palette = TO_FAR_PTR_T(palette_12),
    .reserve_tiles = 86,
    .player_sprite = TO_FAR_PTR_T(sprite_large_skater_skater_),
    .n_actors = 0,
    .n_triggers = 8,
    .n_sprites = 0,
    .n_projectiles = 0,
    .triggers = TO_FAR_PTR_T(scene_tutorial_triggers),
    .script_init = TO_FAR_PTR_T(scene_tutorial_init)
};
