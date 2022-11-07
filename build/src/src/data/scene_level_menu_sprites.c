#pragma bank 255

// Scene: level_menu
// Sprites

#include "gbs_types.h"
#include "data/sprite_mario_props.h"

BANKREF(scene_level_menu_sprites)

const far_ptr_t scene_level_menu_sprites[] = {
    TO_FAR_PTR_T(sprite_mario_props)
};
