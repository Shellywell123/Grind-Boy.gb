#pragma bank 255

// Scene: Logo

#include "gbs_types.h"
#include "data/bg_titlescreen_cart.h"
#include "data/scene_logo_collisions.h"
#include "data/palette_0.h"
#include "data/palette_5.h"
#include "data/sprite_bullet.h"
#include "data/scene_logo_init.h"

BANKREF(scene_logo)

const struct scene_t scene_logo = {
    .width = 20,
    .height = 50,
    .type = SCENE_TYPE_TOPDOWN,
    .background = TO_FAR_PTR_T(bg_titlescreen_cart),
    .collisions = TO_FAR_PTR_T(scene_logo_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_5),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_bullet),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0,
    .script_init = TO_FAR_PTR_T(scene_logo_init)
};
