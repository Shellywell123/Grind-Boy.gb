.module scene_credits_init

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl _pl_vel_y, b_wait_frames, _wait_frames, _fade_frames_per_step, ___bank_scene_title_screen, _scene_title_screen

.area _CODE_255

.LOCAL_ACTOR = -4
.LOCAL_TMP1_WAIT_ARGS = -6
.LOCAL_TMP2_WAIT_ARGS = -6
.LOCAL_TMP3_WAIT_ARGS = -6
.LOCAL_TMP4_CAMERA_MOVE_ARGS = -6

___bank_scene_credits_init = 255
.globl ___bank_scene_credits_init

_scene_credits_init::
        VM_LOCK

        VM_RESERVE              6

        ; Music Play
        VM_MUSIC_PLAY           ___bank_song_rulz_gonaspace_Data, _song_rulz_gonaspace_Data, .MUSIC_NO_LOOP

        ; Sound Play Crash
        VM_SFX_PLAY             ___bank_sound_legacy_3, _sound_legacy_3, ___mute_mask_sound_legacy_3, .SFX_PRIORITY_NORMAL

        ; Player Bounce
        VM_SET_CONST_INT16      _pl_vel_y, -24576

        ; Player Set Spritesheet
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_trick_kickflip, _sprite_trick_kickflip

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP1_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP2_WAIT_ARGS, 6
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP2_WAIT_ARGS

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 0

        ; Actor Set Spritesheet
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_trick_kickflip2, _sprite_trick_kickflip2

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP3_WAIT_ARGS, 6
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP3_WAIT_ARGS

        ; Player Set Spritesheet
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_skater_ben, _sprite_skater_ben
        VM_SET_CONST            PLAYER_SPRITE_PLATFORM_BANK, ___bank_sprite_skater_ben
        VM_SET_CONST            PLAYER_SPRITE_PLATFORM_DATA, _sprite_skater_ben

        ; Camera Move To
        VM_SET_CONST            .LOCAL_TMP4_CAMERA_MOVE_ARGS, 80
        VM_SET_CONST            ^/(.LOCAL_TMP4_CAMERA_MOVE_ARGS + 1)/, 312
        VM_CAMERA_MOVE_TO       .LOCAL_TMP4_CAMERA_MOVE_ARGS, 3, .CAMERA_UNLOCK

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 0
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_title_screen

        ; Stop Script
        VM_STOP
