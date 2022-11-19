#pragma bank 255

// Scene: love

#include "gbs_types.h"
#include "data/bg_untitled_copy_copy_copy.h"
#include "data/scene_8_collisions.h"
#include "data/palette_4.h"
#include "data/palette_5.h"
#include "data/sprite_large_skater_skater_.h"
#include "data/scene_8_triggers.h"
#include "data/scene_8_init.h"

BANKREF(scene_8)

const struct scene_t scene_8 = {
    .width = 182,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(bg_untitled_copy_copy_copy),
    .collisions = TO_FAR_PTR_T(scene_8_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0, 10, 1), PARALLAX_STEP(10, 0, 0), PARALLAX_STEP(18, 0, 0)
    },
    .palette = TO_FAR_PTR_T(palette_4),
    .sprite_palette = TO_FAR_PTR_T(palette_5),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_large_skater_skater_),
    .n_actors = 0,
    .n_triggers = 2,
    .n_sprites = 0,
    .n_projectiles = 0,
    .triggers = TO_FAR_PTR_T(scene_8_triggers),
    .script_init = TO_FAR_PTR_T(scene_8_init)
};
