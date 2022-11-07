#ifndef __sound_legacy_4_INCLUDE__
#define __sound_legacy_4_INCLUDE__

#include <gbdk/platform.h>
#include <stdint.h>

#define MUTE_MASK_sound_legacy_4 0b00000001

BANKREF_EXTERN(sound_legacy_4)
extern const uint8_t sound_legacy_4[];
extern void __mute_mask_sound_legacy_4;

#endif
