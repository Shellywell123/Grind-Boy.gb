#pragma bank 255

// Scene: level_menu

#include "gbs_types.h"
#include "data/bg_level_menu.h"
#include "data/scene_level_menu_collisions.h"
#include "data/palette_3.h"
#include "data/palette_12.h"
#include "data/sprite_skater_ben.h"
#include "data/scene_level_menu_actors.h"
#include "data/scene_level_menu_triggers.h"
#include "data/scene_level_menu_sprites.h"
#include "data/scene_level_menu_init.h"

BANKREF(scene_level_menu)

const struct scene_t scene_level_menu = {
    .width = 71,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(bg_level_menu),
    .collisions = TO_FAR_PTR_T(scene_level_menu_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_3),
    .sprite_palette = TO_FAR_PTR_T(palette_12),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_skater_ben),
    .n_actors = 1,
    .n_triggers = 3,
    .n_sprites = 1,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_level_menu_actors),
    .triggers = TO_FAR_PTR_T(scene_level_menu_triggers),
    .sprites = TO_FAR_PTR_T(scene_level_menu_sprites),
    .script_init = TO_FAR_PTR_T(scene_level_menu_init)
};
