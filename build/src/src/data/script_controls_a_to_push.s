.module script_controls_a_to_push

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.SCRIPT_ARG_INDIRECT_0_VARIABLE = -3

___bank_script_controls_a_to_push = 255
.globl ___bank_script_controls_a_to_push

_script_controls_a_to_push::
        ; Store player field in variable
        VM_GET_INT16 .SCRIPT_ARG_INDIRECT_0_VARIABLE, _pl_vel_y

        ; Input Script Attach
        VM_CONTEXT_PREPARE      4, ___bank_script_input_3, _script_input_3
        VM_INPUT_ATTACH         16, 4

        VM_RET_FAR_N            1
