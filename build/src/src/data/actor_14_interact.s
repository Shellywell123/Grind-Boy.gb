.module actor_14_interact

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames

.area _CODE_255

.LOCAL_TMP0_PARAM0_VALUE = -4
.LOCAL_ACTOR = -4
.LOCAL_TMP2_WAIT_ARGS = -4

___bank_actor_14_interact = 255
.globl ___bank_actor_14_interact

_actor_14_interact::
        VM_RESERVE              4

        ; If Parameter 0 Equals 0
        VM_GET_TLOCAL           .LOCAL_TMP0_PARAM0_VALUE, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP0_PARAM0_VALUE, 0, 1$, 0
        VM_JUMP                 2$
1$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 15
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

        ; Sound Play Tone
        VM_SFX_PLAY             ___bank_sound_legacy_2, _sound_legacy_2, ___mute_mask_sound_legacy_2, .SFX_PRIORITY_NORMAL

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP2_WAIT_ARGS, 6
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP2_WAIT_ARGS

        ; Stop Script
        VM_STOP
2$:

        ; Stop Script
        VM_STOP
