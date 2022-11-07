.module trigger_72_interact

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl b_camera_shake_frames, _camera_shake_frames, _fade_frames_per_step, ___bank_scene_pac, _scene_pac

.area _CODE_255

.LOCAL_ACTOR = -4
.LOCAL_TMP1_CAMERA_SHAKE_ARGS = -6

___bank_trigger_72_interact = 255
.globl ___bank_trigger_72_interact

_trigger_72_interact::
        VM_LOCK

        VM_RESERVE              6

        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

        ; Camera Shake
        VM_SET_CONST            .LOCAL_TMP1_CAMERA_SHAKE_ARGS, 30
        VM_SET_CONST            ^/(.LOCAL_TMP1_CAMERA_SHAKE_ARGS + 1)/, .CAMERA_SHAKE_X
        VM_INVOKE               b_camera_shake_frames, _camera_shake_frames, 0, .LOCAL_TMP1_CAMERA_SHAKE_ARGS

        ; Player Set Spritesheet
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_pac_skater_pac, _sprite_pac_skater_pac
        VM_SET_CONST            PLAYER_SPRITE_PLATFORM_BANK, ___bank_sprite_pac_skater_pac
        VM_SET_CONST            PLAYER_SPRITE_PLATFORM_DATA, _sprite_pac_skater_pac

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 4608
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 8576
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_LEFT
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_pac

        ; Stop Script
        VM_STOP
