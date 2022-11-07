#pragma bank 255

// Scene: level_menu
// Actors

#include "gbs_types.h"
#include "data/sprite_mario_props.h"
#include "data/actor_30_interact.h"

BANKREF(scene_level_menu_actors)

const struct actor_t scene_level_menu_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 176 * 16,
            .y = 32 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_mario_props),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_30_interact),
        .reserve_tiles = 0
    }
};
