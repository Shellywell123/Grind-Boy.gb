.module script_tetris_block

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.SCRIPT_ARG_0_ACTOR = -7
.LOCAL_ACTOR = -4

___bank_script_tetris_block = 255
.globl ___bank_script_tetris_block

_script_tetris_block::
        VM_RESERVE              4

        ; Actor Set Active
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_0_ACTOR

        ; Actor Set Position
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 1280
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 32128
        VM_ACTOR_SET_POS        .LOCAL_ACTOR

        VM_RESERVE              -4
        VM_RET_FAR_N            1
