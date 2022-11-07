.module script_trick_kickflip

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames

.area _CODE_255

.LOCAL_ACTOR = -4
.LOCAL_TMP1_WAIT_ARGS = -5

___bank_script_trick_kickflip = 255
.globl ___bank_script_trick_kickflip

_script_trick_kickflip::
        VM_RESERVE              5

        ; Player Set Spritesheet
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_trick_kickflip, _sprite_trick_kickflip

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP1_WAIT_ARGS, 18
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS

        ; Player Set Spritesheet
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_large_skater_skater_, _sprite_large_skater_skater_
        VM_SET_CONST            PLAYER_SPRITE_PLATFORM_BANK, ___bank_sprite_large_skater_skater_
        VM_SET_CONST            PLAYER_SPRITE_PLATFORM_DATA, _sprite_large_skater_skater_

        VM_RESERVE              -5
        VM_RET_FAR
