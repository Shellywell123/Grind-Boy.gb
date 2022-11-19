#pragma bank 255

// Scene: menu

#include "gbs_types.h"
#include "data/sprite_large_skater_titlesc.h"
#include "data/scene_6_collisions.h"
#include "data/palette_3.h"
#include "data/palette_6.h"
#include "data/sprite_bullet.h"
#include "data/scene_6_actors.h"
#include "data/scene_6_sprites.h"
#include "data/scene_6_init.h"

BANKREF(scene_6)

const struct scene_t scene_6 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(sprite_large_skater_titlesc),
    .collisions = TO_FAR_PTR_T(scene_6_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_3),
    .sprite_palette = TO_FAR_PTR_T(palette_6),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_bullet),
    .n_actors = 2,
    .n_triggers = 0,
    .n_sprites = 2,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_6_actors),
    .sprites = TO_FAR_PTR_T(scene_6_sprites),
    .script_init = TO_FAR_PTR_T(scene_6_init)
};
