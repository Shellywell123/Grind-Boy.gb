#pragma bank 255

// Scene: street

#include "gbs_types.h"
#include "data/bg_level_2.h"
#include "data/scene_street_collisions.h"
#include "data/palette_4.h"
#include "data/palette_12.h"
#include "data/sprite_skater_ben.h"
#include "data/scene_street_triggers.h"
#include "data/scene_street_init.h"

BANKREF(scene_street)

const struct scene_t scene_street = {
    .width = 161,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(bg_level_2),
    .collisions = TO_FAR_PTR_T(scene_street_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_4),
    .sprite_palette = TO_FAR_PTR_T(palette_12),
    .reserve_tiles = 8,
    .player_sprite = TO_FAR_PTR_T(sprite_skater_ben),
    .n_actors = 0,
    .n_triggers = 12,
    .n_sprites = 0,
    .n_projectiles = 0,
    .triggers = TO_FAR_PTR_T(scene_street_triggers),
    .script_init = TO_FAR_PTR_T(scene_street_init)
};
