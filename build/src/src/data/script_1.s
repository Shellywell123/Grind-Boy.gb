.module script_1

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_script_1 = 255
.globl ___bank_script_1

_script_1::
        ; Input Script Attach
        VM_CONTEXT_PREPARE      3, ___bank_script_input_2, _script_input_2
        VM_INPUT_ATTACH         32, 3

        VM_RET_FAR
