.module scene_test_init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

.LOCAL_ACTOR = -4
.LOCAL_TMP1_WAIT_ARGS = -4

___bank_scene_test_init = 255
.globl ___bank_scene_test_init

_scene_test_init::
        VM_LOCK

        VM_RESERVE              4

        ; Actor Activate
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_ACTIVATE       .LOCAL_ACTOR

        ; Call Script: small sprite Controls 2
        VM_PUSH_CONST           VAR_QUEST1 ; Variable V2
        VM_PUSH_CONST           VAR_TEMP_1 ; Variable V1
        VM_PUSH_CONST           VAR_TEMP_0 ; Variable V0
        VM_CALL_FAR             ___bank_script_small_sprite_control, _script_small_sprite_control

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP1_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Stop Script
        VM_STOP
