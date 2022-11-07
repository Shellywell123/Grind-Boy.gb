.module trigger_34_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_trigger_34_interact = 255
.globl ___bank_trigger_34_interact

_trigger_34_interact::
        VM_LOCK

        ; Call Script: Trigger grind2 (place around grind1)
        VM_CALL_FAR             ___bank_script_trigger_grind2_place, _script_trigger_grind2_place

        ; Stop Script
        VM_STOP
