#pragma bank 255

// Scene: mario
// Sprites

#include "gbs_types.h"
#include "data/sprite_pac_gohst.h"

BANKREF(scene_mario_sprites)

const far_ptr_t scene_mario_sprites[] = {
    TO_FAR_PTR_T(sprite_pac_gohst)
};
