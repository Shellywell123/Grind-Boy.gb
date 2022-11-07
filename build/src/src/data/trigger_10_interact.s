.module trigger_10_interact

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl b_camera_shake_frames, _camera_shake_frames, _fade_frames_per_step, ___bank_scene_street, _scene_street

.area _CODE_255

.LOCAL_TMP0_CAMERA_SHAKE_ARGS = -4
.LOCAL_ACTOR = -4

___bank_trigger_10_interact = 255
.globl ___bank_trigger_10_interact

_trigger_10_interact::
        VM_LOCK

        VM_RESERVE              4

        ; Hide Sprites
        VM_HIDE_SPRITES
        ; Camera Shake
        VM_SET_CONST            .LOCAL_TMP0_CAMERA_SHAKE_ARGS, 30
        VM_SET_CONST            ^/(.LOCAL_TMP0_CAMERA_SHAKE_ARGS + 1)/, .CAMERA_SHAKE_X
        VM_INVOKE               b_camera_shake_frames, _camera_shake_frames, 0, .LOCAL_TMP0_CAMERA_SHAKE_ARGS

        ; Show Sprites
        VM_SHOW_SPRITES
        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 128
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 0
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_street

        ; Stop Script
        VM_STOP
