#pragma bank 255

// Scene: credits

#include "gbs_types.h"
#include "data/bg_credits.h"
#include "data/scene_credits_collisions.h"
#include "data/palette_2.h"
#include "data/palette_5.h"
#include "data/sprite_large_skater_skater_.h"
#include "data/scene_credits_init.h"

BANKREF(scene_credits)

const struct scene_t scene_credits = {
    .width = 20,
    .height = 55,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(bg_credits),
    .collisions = TO_FAR_PTR_T(scene_credits_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_2),
    .sprite_palette = TO_FAR_PTR_T(palette_5),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_large_skater_skater_),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0,
    .script_init = TO_FAR_PTR_T(scene_credits_init)
};
