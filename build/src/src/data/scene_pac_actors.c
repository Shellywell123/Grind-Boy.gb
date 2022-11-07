#pragma bank 255

// Scene: pac
// Actors

#include "gbs_types.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_32_update.h"
#include "data/actor_32_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_33_update.h"
#include "data/actor_33_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_34_update.h"
#include "data/actor_34_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_35_update.h"
#include "data/actor_35_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_36_update.h"
#include "data/actor_36_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_37_update.h"
#include "data/actor_37_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_38_update.h"
#include "data/actor_38_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_39_update.h"
#include "data/actor_39_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_40_update.h"
#include "data/actor_40_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_41_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_42_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_43_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_44_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_45_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_46_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_47_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_48_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_49_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_50_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_51_interact.h"

BANKREF(scene_pac_actors)

const struct actor_t scene_pac_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 144 * 16,
            .y = 480 * 16
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
        .script_update = TO_FAR_PTR_T(actor_32_update),
        .script = TO_FAR_PTR_T(actor_32_interact),
        .reserve_tiles = 4
    },
    {
        // Actor 2,
        .pos = {
            .x = 608 * 16,
            .y = 544 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(sprite_pac_gohst),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_33_update),
        .script = TO_FAR_PTR_T(actor_33_interact),
        .reserve_tiles = 4
    },
    {
        // Actor 3,
        .pos = {
            .x = 544 * 16,
            .y = 352 * 16
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
        .script_update = TO_FAR_PTR_T(actor_34_update),
        .script = TO_FAR_PTR_T(actor_34_interact),
        .reserve_tiles = 4
    },
    {
        // Actor 4,
        .pos = {
            .x = 408 * 16,
            .y = 480 * 16
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
        .script_update = TO_FAR_PTR_T(actor_35_update),
        .script = TO_FAR_PTR_T(actor_35_interact),
        .reserve_tiles = 4
    },
    {
        // Actor 5,
        .pos = {
            .x = 272 * 16,
            .y = 352 * 16
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
        .script_update = TO_FAR_PTR_T(actor_36_update),
        .script = TO_FAR_PTR_T(actor_36_interact),
        .reserve_tiles = 4
    },
    {
        // Actor 6,
        .pos = {
            .x = 256 * 16,
            .y = 416 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_LEFT,
        .sprite = TO_FAR_PTR_T(sprite_pac_gohst),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_37_update),
        .script = TO_FAR_PTR_T(actor_37_interact),
        .reserve_tiles = 4
    },
    {
        // Actor 7,
        .pos = {
            .x = 48 * 16,
            .y = 352 * 16
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
        .script_update = TO_FAR_PTR_T(actor_38_update),
        .script = TO_FAR_PTR_T(actor_38_interact),
        .reserve_tiles = 4
    },
    {
        // Actor 8,
        .pos = {
            .x = 48 * 16,
            .y = 288 * 16
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
        .script_update = TO_FAR_PTR_T(actor_39_update),
        .script = TO_FAR_PTR_T(actor_39_interact),
        .reserve_tiles = 4
    },
    {
        // Actor 9,
        .pos = {
            .x = 512 * 16,
            .y = 288 * 16
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
        .script_update = TO_FAR_PTR_T(actor_40_update),
        .script = TO_FAR_PTR_T(actor_40_interact),
        .reserve_tiles = 4
    },
    {
        // Actor 10,
        .pos = {
            .x = 464 * 16,
            .y = 328 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_UP,
        .sprite = TO_FAR_PTR_T(sprite_pac_gohst),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_2,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_41_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 11,
        .pos = {
            .x = 408 * 16,
            .y = 328 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_UP,
        .sprite = TO_FAR_PTR_T(sprite_pac_gohst),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_2,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_42_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 12,
        .pos = {
            .x = 416 * 16,
            .y = 264 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_UP,
        .sprite = TO_FAR_PTR_T(sprite_pac_gohst),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_2,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_43_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 13,
        .pos = {
            .x = 264 * 16,
            .y = 272 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_pac_gohst),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_3,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_44_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 14,
        .pos = {
            .x = 416 * 16,
            .y = 520 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_UP,
        .sprite = TO_FAR_PTR_T(sprite_pac_gohst),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_2,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_45_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 15,
        .pos = {
            .x = 184 * 16,
            .y = 544 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_UP,
        .sprite = TO_FAR_PTR_T(sprite_pac_gohst),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_2,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_46_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 16,
        .pos = {
            .x = 216 * 16,
            .y = 544 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_UP,
        .sprite = TO_FAR_PTR_T(sprite_pac_gohst),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_2,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_47_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 17,
        .pos = {
            .x = 248 * 16,
            .y = 544 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_UP,
        .sprite = TO_FAR_PTR_T(sprite_pac_gohst),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_2,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_48_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 18,
        .pos = {
            .x = 160 * 16,
            .y = 456 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_UP,
        .sprite = TO_FAR_PTR_T(sprite_pac_gohst),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_2,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_49_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 19,
        .pos = {
            .x = 40 * 16,
            .y = 456 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_UP,
        .sprite = TO_FAR_PTR_T(sprite_pac_gohst),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_2,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_50_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 20,
        .pos = {
            .x = 104 * 16,
            .y = 312 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_UP,
        .sprite = TO_FAR_PTR_T(sprite_pac_gohst),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_2,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_51_interact),
        .reserve_tiles = 0
    }
};
