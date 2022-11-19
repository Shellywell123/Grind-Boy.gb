#pragma bank 255

// Scene: maba

#include "gbs_types.h"
#include "data/bg_untitled_copy_copy.h"
#include "data/scene_0_collisions.h"
#include "data/palette_4.h"
#include "data/palette_5.h"
#include "data/sprite_large_skater_skater_.h"
#include "data/scene_0_triggers.h"
#include "data/scene_0_init.h"

BANKREF(scene_0)

const struct scene_t scene_0 = {
    .width = 182,
    .height = 36,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(bg_untitled_copy_copy),
    .collisions = TO_FAR_PTR_T(scene_0_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_4),
    .sprite_palette = TO_FAR_PTR_T(palette_5),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_large_skater_skater_),
    .n_actors = 0,
    .n_triggers = 2,
    .n_sprites = 0,
    .n_projectiles = 0,
    .triggers = TO_FAR_PTR_T(scene_0_triggers),
    .script_init = TO_FAR_PTR_T(scene_0_init)
};
