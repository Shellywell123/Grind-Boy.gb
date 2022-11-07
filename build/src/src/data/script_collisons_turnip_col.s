.module script_collisons_turnip_col

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _pl_vel_y, b_camera_shake_frames, _camera_shake_frames

.area _CODE_255

.SCRIPT_ARG_INDIRECT_0_VARIABLE = -10
.SCRIPT_ARG_INDIRECT_1_VARIABLE = -11
.SCRIPT_ARG_2_ACTOR = -12
.LOCAL_ACTOR = -4
.LOCAL_TMP6_CAMERA_SHAKE_ARGS = -4
.LOCAL_TMP1_OTHER_ACTOR = -7
.LOCAL_TMP2_VALUE_TMP = -7
.LOCAL_TMP3_WAIT_ARGS = -7
.LOCAL_TMP4_WAIT_ARGS = -7
.LOCAL_TMP5_WAIT_ARGS = -7

___bank_script_collisons_turnip_col = 255
.globl ___bank_script_collisons_turnip_col

_script_collisons_turnip_col::
        VM_RESERVE              7

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 0

        ; If Actor up Relative To Actor
        VM_ACTOR_GET_POS        .LOCAL_ACTOR
        VM_SET                  .LOCAL_TMP1_OTHER_ACTOR, .SCRIPT_ARG_2_ACTOR
        VM_ACTOR_GET_POS        .LOCAL_TMP1_OTHER_ACTOR
        VM_RPN
            .R_REF      ^/(.LOCAL_ACTOR + 2)/
            .R_REF      ^/(.LOCAL_TMP1_OTHER_ACTOR + 2)/
            .R_OPERATOR .LT
            .R_STOP
        VM_IF_CONST             .EQ, .ARG0, 0, 1$, 1

        ; Variable Set To True
        VM_SET_CONST            .LOCAL_TMP2_VALUE_TMP, 1
        VM_SET_INDIRECT         .SCRIPT_ARG_INDIRECT_0_VARIABLE, .LOCAL_TMP2_VALUE_TMP

        ; Variable Decrement By 1
        VM_RPN
            .R_REF_IND  .SCRIPT_ARG_INDIRECT_1_VARIABLE
            .R_INT8     1
            .R_OPERATOR .SUB
            .R_STOP
        VM_SET_INDIRECT         ^/(.SCRIPT_ARG_INDIRECT_1_VARIABLE - 1)/, .ARG0
        VM_POP                  1

        ; Actor Set Active
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_2_ACTOR

        ; Actor Set Collisions
        VM_ACTOR_SET_COLL_ENABLED .LOCAL_ACTOR, 0

        ; Actor Set Active
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_2_ACTOR

        ; Actor Stop Update Script
        VM_ACTOR_TERMINATE_UPDATE .LOCAL_ACTOR

        ; Sound Play Tone
        VM_SFX_PLAY             ___bank_sound_legacy_7, _sound_legacy_7, ___mute_mask_sound_legacy_7, .SFX_PRIORITY_NORMAL

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP3_WAIT_ARGS, 6
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP3_WAIT_ARGS

        ; Actor Set Active
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_2_ACTOR

        ; Actor Set Spritesheet
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_turnip_squash, _sprite_turnip_squash

        ; Player Bounce
        VM_SET_CONST_INT16      _pl_vel_y, -8192

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP4_WAIT_ARGS, 30
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP4_WAIT_ARGS

        ; Actor Deactivate
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_2_ACTOR
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

        VM_JUMP                 2$
1$:
        ; Sound Play Beep
        VM_SFX_PLAY             ___bank_sound_legacy_8, _sound_legacy_8, ___mute_mask_sound_legacy_8, .SFX_PRIORITY_NORMAL

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP5_WAIT_ARGS, 6
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP5_WAIT_ARGS

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 0

        ; Actor Set Position
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 128
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 4608
        VM_ACTOR_SET_POS        .LOCAL_ACTOR

        ; Camera Shake
        VM_SET_CONST            .LOCAL_TMP6_CAMERA_SHAKE_ARGS, 30
        VM_SET_CONST            ^/(.LOCAL_TMP6_CAMERA_SHAKE_ARGS + 1)/, .CAMERA_SHAKE_X
        VM_INVOKE               b_camera_shake_frames, _camera_shake_frames, 0, .LOCAL_TMP6_CAMERA_SHAKE_ARGS

2$:

        VM_RESERVE              -7
        VM_RET_FAR_N            3
