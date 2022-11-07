.module script_input_1

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.SCRIPT_ARG_INDIRECT_0_VARIABLE = -3
.SCRIPT_ARG_INDIRECT_1_VARIABLE = -4
.SCRIPT_ARG_INDIRECT_2_VARIABLE = -5

___bank_script_input_1 = 255
.globl ___bank_script_input_1

_script_input_1::
        ; Stop Script
        VM_STOP
