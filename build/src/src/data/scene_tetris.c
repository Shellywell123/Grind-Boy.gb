#pragma bank 255

// Scene: tetris

#include "gbs_types.h"
#include "data/bg_level_tetris.h"
#include "data/scene_tetris_collisions.h"
#include "data/palette_6.h"
#include "data/palette_12.h"
#include "data/sprite_skater_ben.h"
#include "data/scene_tetris_triggers.h"
#include "data/scene_tetris_init.h"

BANKREF(scene_tetris)

const struct scene_t scene_tetris = {
    .width = 20,
    .height = 252,
    .type = SCENE_TYPE_SHMUP,
    .background = TO_FAR_PTR_T(bg_level_tetris),
    .collisions = TO_FAR_PTR_T(scene_tetris_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_6),
    .sprite_palette = TO_FAR_PTR_T(palette_12),
    .reserve_tiles = 24,
    .player_sprite = TO_FAR_PTR_T(sprite_skater_ben),
    .n_actors = 0,
    .n_triggers = 30,
    .n_sprites = 0,
    .n_projectiles = 0,
    .triggers = TO_FAR_PTR_T(scene_tetris_triggers),
    .script_init = TO_FAR_PTR_T(scene_tetris_init)
};
