.module script_23

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_script_23 = 255
.globl ___bank_script_23

_script_23::
        ; Input Script Attach
        VM_CONTEXT_PREPARE      1, ___bank_script_input_1, _script_input_1
        VM_INPUT_ATTACH         128, ^/(1 | .OVERRIDE_DEFAULT)/

        VM_RET_FAR
