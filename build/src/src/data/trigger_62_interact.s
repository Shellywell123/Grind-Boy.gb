.module trigger_62_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_trigger_62_interact = 255
.globl ___bank_trigger_62_interact

_trigger_62_interact::
        VM_LOCK

        ; Call Script: tetris block
        VM_PUSH_CONST           0 ; Actor 0
        VM_CALL_FAR             ___bank_script_tetris_block, _script_tetris_block

        ; Stop Script
        VM_STOP
