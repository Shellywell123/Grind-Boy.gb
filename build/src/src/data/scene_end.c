#pragma bank 255

// Scene: end

#include "gbs_types.h"
#include "data/bg_end.h"
#include "data/scene_end_collisions.h"
#include "data/palette_7.h"
#include "data/palette_12.h"
#include "data/sprite_skater_ben.h"
#include "data/scene_end_init.h"

BANKREF(scene_end)

const struct scene_t scene_end = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(bg_end),
    .collisions = TO_FAR_PTR_T(scene_end_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_7),
    .sprite_palette = TO_FAR_PTR_T(palette_12),
    .reserve_tiles = 42,
    .player_sprite = TO_FAR_PTR_T(sprite_skater_ben),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0,
    .script_init = TO_FAR_PTR_T(scene_end_init)
};
