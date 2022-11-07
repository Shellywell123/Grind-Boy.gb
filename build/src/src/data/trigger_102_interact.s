.module trigger_102_interact

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl b_camera_shake_frames, _camera_shake_frames, _fade_frames_per_step, ___bank_scene_tetris, _scene_tetris

.area _CODE_255

.LOCAL_ACTOR = -4
.LOCAL_TMP1_CAMERA_SHAKE_ARGS = -6

___bank_trigger_102_interact = 255
.globl ___bank_trigger_102_interact

_trigger_102_interact::
        VM_LOCK

        VM_RESERVE              6

        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

        ; Camera Shake
        VM_SET_CONST            .LOCAL_TMP1_CAMERA_SHAKE_ARGS, 30
        VM_SET_CONST            ^/(.LOCAL_TMP1_CAMERA_SHAKE_ARGS + 1)/, .CAMERA_SHAKE_X
        VM_INVOKE               b_camera_shake_frames, _camera_shake_frames, 0, .LOCAL_TMP1_CAMERA_SHAKE_ARGS

        ; Show Sprites
        VM_SHOW_SPRITES
        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 1280
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 32128
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_UP
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_tetris

        ; Stop Script
        VM_STOP
