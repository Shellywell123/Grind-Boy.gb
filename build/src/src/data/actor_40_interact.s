.module actor_40_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_TMP0_PARAM0_VALUE = -1

___bank_actor_40_interact = 255
.globl ___bank_actor_40_interact

_actor_40_interact::
        VM_RESERVE              1

        ; If Parameter 0 Equals 0
        VM_GET_TLOCAL           .LOCAL_TMP0_PARAM0_VALUE, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP0_PARAM0_VALUE, 0, 1$, 0
        VM_JUMP                 2$
1$:
        ; Call Script: Collisons turnip colisions2 
        VM_PUSH_CONST           9 ; Actor 0
        VM_PUSH_CONST           VAR_QUEST1 ; Variable V1
        VM_PUSH_CONST           VAR_QUEST1 ; Variable V0
        VM_CALL_FAR             ___bank_script_collisons_turnip_col, _script_collisons_turnip_col

        ; Stop Script
        VM_STOP
2$:

        ; Stop Script
        VM_STOP
