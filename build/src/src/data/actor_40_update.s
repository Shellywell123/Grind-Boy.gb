.module actor_40_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_actor_40_update = 255
.globl ___bank_actor_40_update

_actor_40_update::
1$:
        ; Call Script: Turnip Movement
        VM_PUSH_CONST           9 ; Actor 0
        VM_CALL_FAR             ___bank_script_turnip_movement, _script_turnip_movement

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
