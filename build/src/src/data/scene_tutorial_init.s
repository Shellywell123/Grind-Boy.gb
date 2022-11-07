.module scene_tutorial_init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

.LOCAL_TMP0_WAIT_ARGS = -1

___bank_scene_tutorial_init = 255
.globl ___bank_scene_tutorial_init

_scene_tutorial_init::
        VM_LOCK

        VM_RESERVE              1

        ; Call Script: Controls - A to push
        VM_PUSH_CONST           VAR_QUEST2 ; Variable V0
        VM_CALL_FAR             ___bank_script_controls_a_to_push, _script_controls_a_to_push

        ; Call Script: Controls - Down to stop
        VM_CALL_FAR             ___bank_script_controls_down_to_sto, _script_controls_down_to_sto

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP0_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP0_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Stop Script
        VM_STOP
