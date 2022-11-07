.module script_input_3

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames

.area _CODE_255

.SCRIPT_ARG_INDIRECT_0_VARIABLE = -8
.LOCAL_ACTOR = -4
.LOCAL_TMP1_WAIT_ARGS = -5

___bank_script_input_3 = 255
.globl ___bank_script_input_3

_script_input_3::
        VM_RESERVE              5

        ; If Variable .EQ Value
        VM_PUSH_VALUE_IND       .SCRIPT_ARG_INDIRECT_0_VARIABLE
        VM_IF_CONST             .EQ, .ARG0, 0, 1$, 1
        VM_JUMP                 2$
1$:
        ; Player Set Spritesheet
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_large_skater_pushing, _sprite_large_skater_pushing

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP1_WAIT_ARGS, 18
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS

        ; Player Set Spritesheet
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_large_skater_skater_, _sprite_large_skater_skater_

2$:

        ; Stop Script
        VM_STOP
