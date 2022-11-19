.module scene_7_init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

.LOCAL_TMP0_WAIT_ARGS = -1
.LOCAL_TMP1_WAIT_ARGS = -1

___bank_scene_7_init = 255
.globl ___bank_scene_7_init

_scene_7_init::
        VM_LOCK

        VM_RESERVE              1

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP0_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP0_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Background Text
        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_BKG

        VM_LOAD_TEXT            0
        .asciz "\003\002\021SouthBank"
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_NONMODAL, .UI_WAIT_TEXT

        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_WIN

        ; Call Script: Master
        VM_CALL_FAR             ___bank_script_24, _script_24

        ; Store player field in variable
        VM_GET_INT16 VAR_S4_LOCAL_10, _pl_vel_x

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S4_LOCAL_10, 0, 1$, 0
        VM_JUMP                 2$
1$:
        ; Sound Play Beep
        VM_SFX_PLAY             ___bank_sound_legacy_2, _sound_legacy_2, ___mute_mask_sound_legacy_2, .SFX_PRIORITY_NORMAL

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP1_WAIT_ARGS, 30
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS

2$:

        ; Stop Script
        VM_STOP
