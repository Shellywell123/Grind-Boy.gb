#pragma bank 255

// Scene: level menu 2
// Actors

#include "gbs_types.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_31_update.h"

BANKREF(scene_level_menu_2_actors)

const struct actor_t scene_level_menu_2_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 208 * 16,
            .y = 56 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_RIGHT,
        .sprite = TO_FAR_PTR_T(sprite_pac_gohst),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_31_update),
        .reserve_tiles = 0
    }
};
