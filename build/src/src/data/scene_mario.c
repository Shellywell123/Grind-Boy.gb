#pragma bank 255

// Scene: mario

#include "gbs_types.h"
#include "data/bg_level_mario2.h"
#include "data/scene_mario_collisions.h"
#include "data/palette_2.h"
#include "data/palette_12.h"
#include "data/sprite_skater_ben.h"
#include "data/scene_mario_actors.h"
#include "data/scene_mario_triggers.h"
#include "data/scene_mario_sprites.h"
#include "data/scene_mario_init.h"
#include "data/scene_mario_p_hit1.h"

BANKREF(scene_mario)

const struct scene_t scene_mario = {
    .width = 160,
    .height = 22,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(bg_level_mario2),
    .collisions = TO_FAR_PTR_T(scene_mario_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_2),
    .sprite_palette = TO_FAR_PTR_T(palette_12),
    .reserve_tiles = 8,
    .player_sprite = TO_FAR_PTR_T(sprite_skater_ben),
    .n_actors = 20,
    .n_triggers = 9,
    .n_sprites = 1,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_mario_actors),
    .triggers = TO_FAR_PTR_T(scene_mario_triggers),
    .sprites = TO_FAR_PTR_T(scene_mario_sprites),
    .script_init = TO_FAR_PTR_T(scene_mario_init),
    .script_p_hit1 = TO_FAR_PTR_T(scene_mario_p_hit1)
};
