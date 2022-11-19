.module script_24

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_script_24 = 255
.globl ___bank_script_24

_script_24::
        ; Call Script: Anim - A to Push
        VM_CALL_FAR             ___bank_script_controls_a_to_push, _script_controls_a_to_push

        ; Call Script: Menu  - pause screen
        VM_CALL_FAR             ___bank_script_23, _script_23

        ; Call Script: Anim - B (HOLD) to Charge
        VM_CALL_FAR             ___bank_script_1, _script_1

        ; Call Script: Anim - Down to Stop
        VM_CALL_FAR             ___bank_script_30, _script_30

        VM_RET_FAR
