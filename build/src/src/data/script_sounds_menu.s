.module script_sounds_menu

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_script_sounds_menu = 255
.globl ___bank_script_sounds_menu

_script_sounds_menu::
        ; Wait For Input
        VM_INPUT_WAIT           16

        ; Call Script: Sounds - Menu Select
        VM_CALL_FAR             ___bank_script_sounds_menu_select, _script_sounds_menu_select

        ; Input Script Attach
        VM_CONTEXT_PREPARE      3, ___bank_script_input_0, _script_input_0
        VM_INPUT_ATTACH         32, ^/(3 | .OVERRIDE_DEFAULT)/

        VM_RET_FAR
