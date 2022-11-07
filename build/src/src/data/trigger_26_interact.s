.module trigger_26_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_trigger_26_interact = 255
.globl ___bank_trigger_26_interact

_trigger_26_interact::
        VM_LOCK

        ; Call Script: Trigger grind 1 (placeabovebluelip)
        VM_PUSH_CONST           VAR_QUEST1 ; Variable V2
        VM_PUSH_CONST           VAR_QUEST1 ; Variable V0
        VM_CALL_FAR             ___bank_script_trigger_grind_1_plac, _script_trigger_grind_1_plac

        ; Stop Script
        VM_STOP
