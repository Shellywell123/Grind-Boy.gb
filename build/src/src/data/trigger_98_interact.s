.module trigger_98_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_trigger_98_interact = 255
.globl ___bank_trigger_98_interact

_trigger_98_interact::
        VM_LOCK

        VM_RESERVE              4

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 0

        ; Actor Set Position
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 128
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 4608
        VM_ACTOR_SET_POS        .LOCAL_ACTOR

        ; Stop Script
        VM_STOP
