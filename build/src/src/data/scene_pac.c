#pragma bank 255

// Scene: pac

#include "gbs_types.h"
#include "data/bg_level_pacman.h"
#include "data/scene_pac_collisions.h"
#include "data/palette_11.h"
#include "data/palette_12.h"
#include "data/sprite_skater_ben.h"
#include "data/scene_pac_actors.h"
#include "data/scene_pac_triggers.h"
#include "data/scene_pac_sprites.h"
#include "data/scene_pac_init.h"

BANKREF(scene_pac)

const struct scene_t scene_pac = {
    .width = 80,
    .height = 70,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(bg_level_pacman),
    .collisions = TO_FAR_PTR_T(scene_pac_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_11),
    .sprite_palette = TO_FAR_PTR_T(palette_12),
    .reserve_tiles = 86,
    .player_sprite = TO_FAR_PTR_T(sprite_skater_ben),
    .n_actors = 20,
    .n_triggers = 2,
    .n_sprites = 1,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_pac_actors),
    .triggers = TO_FAR_PTR_T(scene_pac_triggers),
    .sprites = TO_FAR_PTR_T(scene_pac_sprites),
    .script_init = TO_FAR_PTR_T(scene_pac_init)
};
