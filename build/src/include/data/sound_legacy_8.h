#ifndef __sound_legacy_8_INCLUDE__
#define __sound_legacy_8_INCLUDE__

#include <gbdk/platform.h>
#include <stdint.h>

#define MUTE_MASK_sound_legacy_8 0b00001000

BANKREF_EXTERN(sound_legacy_8)
extern const uint8_t sound_legacy_8[];
extern void __mute_mask_sound_legacy_8;

#endif
