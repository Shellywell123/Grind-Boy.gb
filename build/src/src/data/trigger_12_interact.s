.module trigger_12_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_trigger_12_interact = 255
.globl ___bank_trigger_12_interact

_trigger_12_interact::
        VM_LOCK

        VM_RESERVE              4

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 0

        ; Actor Set Position
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 128
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 384
        VM_ACTOR_SET_POS        .LOCAL_ACTOR

        ; Sound Play Tone
        VM_SFX_PLAY             ___bank_sound_legacy_5, _sound_legacy_5, ___mute_mask_sound_legacy_5, .SFX_PRIORITY_NORMAL

        ; Sound Play Tone
        VM_SFX_PLAY             ___bank_sound_legacy_6, _sound_legacy_6, ___mute_mask_sound_legacy_6, .SFX_PRIORITY_NORMAL

        ; Stop Script
        VM_STOP
