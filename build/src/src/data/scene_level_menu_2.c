#pragma bank 255

// Scene: level menu 2

#include "gbs_types.h"
#include "data/bg_level_menu2.h"
#include "data/scene_level_menu_2_collisions.h"
#include "data/palette_9.h"
#include "data/palette_12.h"
#include "data/sprite_skater_ben.h"
#include "data/scene_level_menu_2_actors.h"
#include "data/scene_level_menu_2_triggers.h"
#include "data/scene_level_menu_2_sprites.h"
#include "data/scene_level_menu_2_init.h"

BANKREF(scene_level_menu_2)

const struct scene_t scene_level_menu_2 = {
    .width = 50,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(bg_level_menu2),
    .collisions = TO_FAR_PTR_T(scene_level_menu_2_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_9),
    .sprite_palette = TO_FAR_PTR_T(palette_12),
    .reserve_tiles = 8,
    .player_sprite = TO_FAR_PTR_T(sprite_skater_ben),
    .n_actors = 1,
    .n_triggers = 4,
    .n_sprites = 1,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_level_menu_2_actors),
    .triggers = TO_FAR_PTR_T(scene_level_menu_2_triggers),
    .sprites = TO_FAR_PTR_T(scene_level_menu_2_sprites),
    .script_init = TO_FAR_PTR_T(scene_level_menu_2_init)
};
