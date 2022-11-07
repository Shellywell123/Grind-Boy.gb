.module trigger_20_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_trigger_20_interact = 255
.globl ___bank_trigger_20_interact

_trigger_20_interact::
        VM_LOCK

        ; Call Script: Trigger grind2 (place around grind1)
        VM_CALL_FAR             ___bank_script_trigger_grind2_place, _script_trigger_grind2_place

        ; Stop Script
        VM_STOP
