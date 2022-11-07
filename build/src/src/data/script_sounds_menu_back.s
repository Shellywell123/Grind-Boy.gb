.module script_sounds_menu_back

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames

.area _CODE_255

.LOCAL_TMP0_WAIT_ARGS = -1
.LOCAL_TMP1_WAIT_ARGS = -1

___bank_script_sounds_menu_back = 255
.globl ___bank_script_sounds_menu_back

_script_sounds_menu_back::
        VM_RESERVE              1

        ; Sound Play Tone
        VM_SFX_PLAY             ___bank_sound_legacy_1, _sound_legacy_1, ___mute_mask_sound_legacy_1, .SFX_PRIORITY_NORMAL

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP0_WAIT_ARGS, 6
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP0_WAIT_ARGS

        ; Sound Play Tone
        VM_SFX_PLAY             ___bank_sound_legacy_0, _sound_legacy_0, ___mute_mask_sound_legacy_0, .SFX_PRIORITY_NORMAL

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP1_WAIT_ARGS, 6
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS

        VM_RESERVE              -1
        VM_RET_FAR
