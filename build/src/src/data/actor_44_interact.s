.module actor_44_interact

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step, ___bank_scene_level_menu_2, _scene_level_menu_2

.area _CODE_255

.LOCAL_TMP0_PARAM0_VALUE = -4
.LOCAL_TMP1_WAIT_ARGS = -4
.LOCAL_ACTOR = -4

___bank_actor_44_interact = 255
.globl ___bank_actor_44_interact

_actor_44_interact::
        VM_RESERVE              4

        ; If Parameter 0 Equals 0
        VM_GET_TLOCAL           .LOCAL_TMP0_PARAM0_VALUE, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP0_PARAM0_VALUE, 0, 1$, 0
        VM_JUMP                 2$
1$:
        ; Sound Play Tone
        VM_SFX_PLAY             ___bank_sound_legacy_2, _sound_legacy_2, ___mute_mask_sound_legacy_2, .SFX_PRIORITY_NORMAL

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP1_WAIT_ARGS, 6
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS

        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 13
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

        ; Player Set Spritesheet
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_skater_ben, _sprite_skater_ben
        VM_SET_CONST            PLAYER_SPRITE_PLATFORM_BANK, ___bank_sprite_skater_ben
        VM_SET_CONST            PLAYER_SPRITE_PLATFORM_DATA, _sprite_skater_ben

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 3328
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 1536
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_RIGHT
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_level_menu_2

        ; Stop Script
        VM_STOP
2$:

        ; Stop Script
        VM_STOP
