.module script_input_0

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_script_input_0 = 255
.globl ___bank_script_input_0

_script_input_0::
        ; Call Script: Sounds - Menu back
        VM_CALL_FAR             ___bank_script_sounds_menu_back, _script_sounds_menu_back

        ; Stop Script
        VM_STOP
