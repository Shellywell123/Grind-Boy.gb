.module script_trigger_grind2_place

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_script_trigger_grind2_place = 255
.globl ___bank_script_trigger_grind2_place

_script_trigger_grind2_place::
        VM_RESERVE              4

        ; Player Set Spritesheet
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_skater_ben, _sprite_skater_ben

        VM_RESERVE              -4
        VM_RET_FAR
