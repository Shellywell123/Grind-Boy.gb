.module script_controls_2_pac

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.SCRIPT_ARG_INDIRECT_0_VARIABLE = -3
.SCRIPT_ARG_INDIRECT_1_VARIABLE = -4
.SCRIPT_ARG_INDIRECT_2_VARIABLE = -5

___bank_script_controls_2_pac = 255
.globl ___bank_script_controls_2_pac

_script_controls_2_pac::
        ; Input Script Attach
        VM_CONTEXT_PREPARE      1, ___bank_script_input_5, _script_input_5
        VM_INPUT_ATTACH         128, ^/(1 | .OVERRIDE_DEFAULT)/

        ; Engine Field Store In Variable
        VM_GET_INT16            VAR_QUEST1, _plat_jump_vel

        ; If Variable True
        VM_PUSH_VALUE_IND       .SCRIPT_ARG_INDIRECT_0_VARIABLE
        VM_IF_CONST             .GT, .ARG0, 0, 1$, 1
        VM_JUMP                 2$
1$:
        ; Call Script: Trick - Kickflip
        VM_CALL_FAR             ___bank_script_trick_kickflip, _script_trick_kickflip

2$:

        VM_RET_FAR_N            3
