#pragma bank 255

// Scene: menu
// Sprites

#include "gbs_types.h"
#include "data/sprite_wheel.h"
#include "data/sprite_version1_1.h"

BANKREF(scene_6_sprites)

const far_ptr_t scene_6_sprites[] = {
    TO_FAR_PTR_T(sprite_wheel),
    TO_FAR_PTR_T(sprite_version1_1)
};
