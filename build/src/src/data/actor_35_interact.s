.module actor_35_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_TMP0_PARAM0_VALUE = -1

___bank_actor_35_interact = 255
.globl ___bank_actor_35_interact

_actor_35_interact::
        VM_RESERVE              1

        ; If Parameter 0 Equals 0
        VM_GET_TLOCAL           .LOCAL_TMP0_PARAM0_VALUE, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP0_PARAM0_VALUE, 0, 1$, 0
        VM_JUMP                 2$
1$:
        ; Call Script: Collisions Turnip Collisions
        VM_PUSH_CONST           4 ; Actor 0
        VM_PUSH_CONST           VAR_QUEST1 ; Variable V1
        VM_PUSH_CONST           VAR_QUEST1 ; Variable V0
        VM_CALL_FAR             ___bank_script_collisions_turnip_co, _script_collisions_turnip_co

        ; Stop Script
        VM_STOP
2$:

        ; Stop Script
        VM_STOP