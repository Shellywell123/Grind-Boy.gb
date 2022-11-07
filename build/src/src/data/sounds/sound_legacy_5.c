#pragma bank 255

#include <gbdk/platform.h>
#include <stdint.h>

BANKREF(sound_legacy_5)
const uint8_t sound_legacy_5[] = {
0xF1, 0b11111000,0x00,0x01,0xF0,0x71,0x85,
0xF0,
0xF0,
0x01, 0b00101000, 0x00,0xc0,      //shut ch1
0x01, 0b00000111,                 //stop
};
void AT(0b00000001) __mute_mask_sound_legacy_5;