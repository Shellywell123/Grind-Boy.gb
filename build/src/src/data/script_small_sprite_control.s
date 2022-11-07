.module script_small_sprite_control

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.SCRIPT_ARG_INDIRECT_0_VARIABLE = -4
.SCRIPT_ARG_INDIRECT_1_VARIABLE = -5
.SCRIPT_ARG_INDIRECT_2_VARIABLE = -6
.LOCAL_TMP0_VALUE_TMP = -1

___bank_script_small_sprite_control = 255
.globl ___bank_script_small_sprite_control

_script_small_sprite_control::
        VM_RESERVE              1

        ; Variable Set To False
        VM_SET_CONST            .LOCAL_TMP0_VALUE_TMP, 0
        VM_SET_INDIRECT         .SCRIPT_ARG_INDIRECT_0_VARIABLE, .LOCAL_TMP0_VALUE_TMP

        ; Input Script Attach
        VM_CONTEXT_PREPARE      3, ___bank_script_input_1, _script_input_1
        VM_INPUT_ATTACH         32, ^/(3 | .OVERRIDE_DEFAULT)/

        ; Input Script Attach
        VM_CONTEXT_PREPARE      1, ___bank_script_input_2, _script_input_2
        VM_INPUT_ATTACH         128, ^/(1 | .OVERRIDE_DEFAULT)/

        VM_RESERVE              -1
        VM_RET_FAR_N            3
