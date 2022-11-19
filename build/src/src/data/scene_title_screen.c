#pragma bank 255

// Scene: Title Screen

#include "gbs_types.h"
#include "data/bg_titlescreen3.h"
#include "data/scene_title_screen_collisions.h"
#include "data/palette_1.h"
#include "data/palette_6.h"
#include "data/sprite_bullet.h"
#include "data/scene_title_screen_actors.h"
#include "data/scene_title_screen_sprites.h"
#include "data/scene_title_screen_init.h"

BANKREF(scene_title_screen)

const struct scene_t scene_title_screen = {
    .width = 53,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(bg_titlescreen3),
    .collisions = TO_FAR_PTR_T(scene_title_screen_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0, 16, 0), PARALLAX_STEP(16, 18, 128), PARALLAX_STEP(18, 0, 0)
    },
    .palette = TO_FAR_PTR_T(palette_1),
    .sprite_palette = TO_FAR_PTR_T(palette_6),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_bullet),
    .n_actors = 3,
    .n_triggers = 0,
    .n_sprites = 2,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_title_screen_actors),
    .sprites = TO_FAR_PTR_T(scene_title_screen_sprites),
    .script_init = TO_FAR_PTR_T(scene_title_screen_init)
};
