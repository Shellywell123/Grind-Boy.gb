.module scene_level_menu_4_init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

.LOCAL_TMP0_WAIT_ARGS = -1

___bank_scene_level_menu_4_init = 255
.globl ___bank_scene_level_menu_4_init

_scene_level_menu_4_init::
        VM_LOCK

        VM_RESERVE              1

        ; Music Play
        VM_MUSIC_PLAY           ___bank_song_rulz_into_the_woods_Data, _song_rulz_into_the_woods_Data, .MUSIC_NO_LOOP

        ; Call Script: small sprite Controls 2
        VM_PUSH_CONST           VAR_QUEST1 ; Variable V2
        VM_PUSH_CONST           VAR_QUEST1 ; Variable V1
        VM_PUSH_CONST           VAR_QUEST1 ; Variable V0
        VM_CALL_FAR             ___bank_script_small_sprite_control, _script_small_sprite_control

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP0_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP0_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Stop Script
        VM_STOP
