#pragma bank 255

// Scene: test

#include "gbs_types.h"
#include "data/bg_end.h"
#include "data/scene_test_collisions.h"
#include "data/palette_8.h"
#include "data/palette_12.h"
#include "data/sprite_large_skater_skater_.h"
#include "data/scene_test_init.h"

BANKREF(scene_test)

const struct scene_t scene_test = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(bg_end),
    .collisions = TO_FAR_PTR_T(scene_test_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_8),
    .sprite_palette = TO_FAR_PTR_T(palette_12),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_large_skater_skater_),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0,
    .script_init = TO_FAR_PTR_T(scene_test_init)
};
