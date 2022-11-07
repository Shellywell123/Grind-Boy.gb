#pragma bank 255

// Scene: pac
// Sprites

#include "gbs_types.h"
#include "data/sprite_pac_gohst.h"

BANKREF(scene_pac_sprites)

const far_ptr_t scene_pac_sprites[] = {
    TO_FAR_PTR_T(sprite_pac_gohst)
};
