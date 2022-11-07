.module script_controls_down_to_sto

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_script_controls_down_to_sto = 255
.globl ___bank_script_controls_down_to_sto

_script_controls_down_to_sto::
        ; Input Script Attach
        VM_CONTEXT_PREPARE      5, ___bank_script_input_4, _script_input_4
        VM_INPUT_ATTACH         8, 5

        VM_RET_FAR
