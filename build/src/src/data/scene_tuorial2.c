#pragma bank 255

// Scene: tuorial2

#include "gbs_types.h"
#include "data/bg_tutorial2.h"
#include "data/scene_tuorial2_collisions.h"
#include "data/palette_10.h"
#include "data/palette_12.h"
#include "data/sprite_skater_ben.h"
#include "data/scene_tuorial2_triggers.h"
#include "data/scene_tuorial2_init.h"

BANKREF(scene_tuorial2)

const struct scene_t scene_tuorial2 = {
    .width = 60,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(bg_tutorial2),
    .collisions = TO_FAR_PTR_T(scene_tuorial2_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_10),
    .sprite_palette = TO_FAR_PTR_T(palette_12),
    .reserve_tiles = 8,
    .player_sprite = TO_FAR_PTR_T(sprite_skater_ben),
    .n_actors = 0,
    .n_triggers = 7,
    .n_sprites = 0,
    .n_projectiles = 0,
    .triggers = TO_FAR_PTR_T(scene_tuorial2_triggers),
    .script_init = TO_FAR_PTR_T(scene_tuorial2_init)
};
