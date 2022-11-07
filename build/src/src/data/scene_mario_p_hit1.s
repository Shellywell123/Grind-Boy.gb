.module scene_mario_p_hit1

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_TMP0_PARAM0_VALUE = -4
.LOCAL_ACTOR = -4

___bank_scene_mario_p_hit1 = 255
.globl ___bank_scene_mario_p_hit1

_scene_mario_p_hit1::
        VM_RESERVE              4

        ; If Parameter 0 Equals 2
        VM_GET_TLOCAL           .LOCAL_TMP0_PARAM0_VALUE, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP0_PARAM0_VALUE, 2, 1$, 0
        VM_JUMP                 2$
1$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 0

        ; Actor Set Collisions
        VM_ACTOR_SET_COLL_ENABLED .LOCAL_ACTOR, 0

        ; Stop Script
        VM_STOP
2$:

        ; Stop Script
        VM_STOP
