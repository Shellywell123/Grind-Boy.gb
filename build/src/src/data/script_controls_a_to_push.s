.module script_controls_a_to_push

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_script_controls_a_to_push = 255
.globl ___bank_script_controls_a_to_push

_script_controls_a_to_push::
        ; Store player field in variable
        VM_GET_UINT8 VAR_VARIABLE_30, _grounded

        ; Input Script Attach
        VM_CONTEXT_PREPARE      4, ___bank_script_input_0, _script_input_0
        VM_INPUT_ATTACH         16, 4

        VM_RET_FAR
