.module script_init_turnip_init

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.SCRIPT_ARG_0_ACTOR = -3

___bank_script_init_turnip_init = 255
.globl ___bank_script_init_turnip_init

_script_init_turnip_init::
        VM_RET_FAR_N            1
