.module scene_credits_init

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step, ___bank_scene_title_screen, _scene_title_screen

.area _CODE_255

.LOCAL_ACTOR = -4
.LOCAL_TMP1_WAIT_ARGS = -6
.LOCAL_TMP2_WAIT_ARGS = -6
.LOCAL_TMP3_CAMERA_MOVE_ARGS = -6

___bank_scene_credits_init = 255
.globl ___bank_scene_credits_init

_scene_credits_init::
        VM_LOCK

        VM_RESERVE              6

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 0

        ; Actor Set Animation State
        VM_ACTOR_SET_ANIM_SET   .LOCAL_ACTOR, STATE_DEFAULT

        ; Music Play
        VM_MUSIC_PLAY           ___bank_song_rulz_gonaspace_Data, _song_rulz_gonaspace_Data, .MUSIC_NO_LOOP

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP1_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP2_WAIT_ARGS, 180
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP2_WAIT_ARGS

        ; Camera Move To
        VM_SET_CONST            .LOCAL_TMP3_CAMERA_MOVE_ARGS, 80
        VM_SET_CONST            ^/(.LOCAL_TMP3_CAMERA_MOVE_ARGS + 1)/, 264
        VM_CAMERA_MOVE_TO       .LOCAL_TMP3_CAMERA_MOVE_ARGS, 3, .CAMERA_UNLOCK

        ; Music Stop
        VM_MUSIC_STOP

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 3456
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 128
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_title_screen

        ; Stop Script
        VM_STOP
