#pragma bank 255

// Scene: mario
// Actors

#include "gbs_types.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_0_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_1_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_2_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_3_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_4_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_5_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_6_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_7_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_8_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_9_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_10_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_11_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_12_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_13_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_14_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_15_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_16_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_17_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_18_interact.h"
#include "data/sprite_pac_gohst.h"
#include "data/actor_19_interact.h"

BANKREF(scene_mario_actors)

const struct actor_t scene_mario_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 224 * 16,
            .y = 56 * 16
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
        .script = TO_FAR_PTR_T(actor_0_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 2,
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
        .dir = DIR_UP,
        .sprite = TO_FAR_PTR_T(sprite_pac_gohst),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_2,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_1_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 3,
        .pos = {
            .x = 192 * 16,
            .y = 56 * 16
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
        .script = TO_FAR_PTR_T(actor_2_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 4,
        .pos = {
            .x = 176 * 16,
            .y = 56 * 16
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
        .script = TO_FAR_PTR_T(actor_3_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 5,
        .pos = {
            .x = 480 * 16,
            .y = 56 * 16
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
        .script = TO_FAR_PTR_T(actor_4_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 6,
        .pos = {
            .x = 448 * 16,
            .y = 56 * 16
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
        .script = TO_FAR_PTR_T(actor_5_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 7,
        .pos = {
            .x = 464 * 16,
            .y = 56 * 16
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
        .script = TO_FAR_PTR_T(actor_6_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 8,
        .pos = {
            .x = 896 * 16,
            .y = 80 * 16
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
        .script = TO_FAR_PTR_T(actor_7_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 9,
        .pos = {
            .x = 368 * 16,
            .y = 72 * 16
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
        .script = TO_FAR_PTR_T(actor_8_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 10,
        .pos = {
            .x = 720 * 16,
            .y = 56 * 16
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
        .script = TO_FAR_PTR_T(actor_9_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 11,
        .pos = {
            .x = 736 * 16,
            .y = 56 * 16
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
        .script = TO_FAR_PTR_T(actor_10_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 12,
        .pos = {
            .x = 1200 * 16,
            .y = 96 * 16
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
        .script = TO_FAR_PTR_T(actor_11_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 13,
        .pos = {
            .x = 1176 * 16,
            .y = 96 * 16
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
        .script = TO_FAR_PTR_T(actor_12_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 14,
        .pos = {
            .x = 1152 * 16,
            .y = 96 * 16
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
        .script = TO_FAR_PTR_T(actor_13_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 15,
        .pos = {
            .x = 1200 * 16,
            .y = 112 * 16
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
        .script = TO_FAR_PTR_T(actor_14_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 16,
        .pos = {
            .x = 1176 * 16,
            .y = 80 * 16
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
        .script = TO_FAR_PTR_T(actor_15_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 17,
        .pos = {
            .x = 1200 * 16,
            .y = 80 * 16
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
        .script = TO_FAR_PTR_T(actor_16_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 18,
        .pos = {
            .x = 1152 * 16,
            .y = 112 * 16
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
        .script = TO_FAR_PTR_T(actor_17_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 19,
        .pos = {
            .x = 1152 * 16,
            .y = 80 * 16
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
        .script = TO_FAR_PTR_T(actor_18_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 20,
        .pos = {
            .x = 1176 * 16,
            .y = 112 * 16
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
        .script = TO_FAR_PTR_T(actor_19_interact),
        .reserve_tiles = 0
    }
};
