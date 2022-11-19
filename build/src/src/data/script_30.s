.module script_30

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_script_30 = 255
.globl ___bank_script_30

_script_30::
        VM_RESERVE              4

        ; Input Script Attach
        VM_CONTEXT_PREPARE      5, ___bank_script_input_3, _script_input_3
        VM_INPUT_ATTACH         8, 5

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 0

        ; Actor Set Animation State
        VM_ACTOR_SET_ANIM_SET   .LOCAL_ACTOR, STATE_DEFAULT

        VM_RESERVE              -4
        VM_RET_FAR
