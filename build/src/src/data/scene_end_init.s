.module scene_end_init

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step, _pl_vel_y, ___bank_scene_title_screen, _scene_title_screen

.area _CODE_255

.LOCAL_TMP0_WAIT_ARGS = -4
.LOCAL_ACTOR = -4
.LOCAL_TMP2_WAIT_ARGS = -5
.LOCAL_TMP3_WAIT_ARGS = -5
.LOCAL_TMP4_WAIT_ARGS = -5
.LOCAL_TMP5_WAIT_ARGS = -5

___bank_scene_end_init = 255
.globl ___bank_scene_end_init

_scene_end_init::
        VM_LOCK

        VM_RESERVE              5

        ; Overlay Show
        VM_OVERLAY_SHOW         0, 0, 0, 0

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP0_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP0_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Overlay Move To
        VM_OVERLAY_MOVE_TO      0, 18, 2
        VM_OVERLAY_WAIT         .UI_MODAL, .UI_WAIT_WINDOW

        ; Sound Play Crash
        VM_SFX_PLAY             ___bank_sound_legacy_3, _sound_legacy_3, ___mute_mask_sound_legacy_3, .SFX_PRIORITY_NORMAL

        ; Player Bounce
        VM_SET_CONST_INT16      _pl_vel_y, -24576

        ; Player Set Spritesheet
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_trick_ollie, _sprite_trick_ollie

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP2_WAIT_ARGS, 6
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP2_WAIT_ARGS

        ; Player Set Spritesheet
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_skater_ben, _sprite_skater_ben
        VM_SET_CONST            PLAYER_SPRITE_PLATFORM_BANK, ___bank_sprite_skater_ben
        VM_SET_CONST            PLAYER_SPRITE_PLATFORM_DATA, _sprite_skater_ben

        ; Player Set Spritesheet
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_trick_kickflip, _sprite_trick_kickflip

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP3_WAIT_ARGS, 6
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP3_WAIT_ARGS

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 0

        ; Actor Set Spritesheet
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_trick_kickflip2, _sprite_trick_kickflip2

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP4_WAIT_ARGS, 6
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP4_WAIT_ARGS

        ; Player Set Spritesheet
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_skater_ben, _sprite_skater_ben
        VM_SET_CONST            PLAYER_SPRITE_PLATFORM_BANK, ___bank_sprite_skater_ben
        VM_SET_CONST            PLAYER_SPRITE_PLATFORM_DATA, _sprite_skater_ben

        ; Call Script: small sprite Controls 2
        VM_PUSH_CONST           VAR_QUEST1 ; Variable V2
        VM_PUSH_CONST           VAR_QUEST1 ; Variable V1
        VM_PUSH_CONST           VAR_QUEST1 ; Variable V0
        VM_CALL_FAR             ___bank_script_small_sprite_control, _script_small_sprite_control

        ; Music Play
        VM_MUSIC_PLAY           ___bank_song_rulz_gonaspace_Data, _song_rulz_gonaspace_Data, .MUSIC_NO_LOOP

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP5_WAIT_ARGS, 300
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP5_WAIT_ARGS

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
