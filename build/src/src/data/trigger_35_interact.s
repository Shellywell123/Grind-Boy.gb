.module trigger_35_interact

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl b_camera_shake_frames, _camera_shake_frames, _fade_frames_per_step, ___bank_scene_level_menu_3, _scene_level_menu_3

.area _CODE_255

.LOCAL_TMP0_CAMERA_SHAKE_ARGS = -4
.LOCAL_ACTOR = -4

___bank_trigger_35_interact = 255
.globl ___bank_trigger_35_interact

_trigger_35_interact::
        VM_LOCK

        VM_RESERVE              4

        ; Camera Shake
        VM_SET_CONST            .LOCAL_TMP0_CAMERA_SHAKE_ARGS, 30
        VM_SET_CONST            ^/(.LOCAL_TMP0_CAMERA_SHAKE_ARGS + 1)/, .CAMERA_SHAKE_Y
        VM_INVOKE               b_camera_shake_frames, _camera_shake_frames, 0, .LOCAL_TMP0_CAMERA_SHAKE_ARGS

        ; Player Set Spritesheet
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_skater_ben, _sprite_skater_ben

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 5120
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 1536
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_RIGHT
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_level_menu_3

        ; Stop Script
        VM_STOP
