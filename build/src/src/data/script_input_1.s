.module script_input_1

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl _fade_frames_per_step, ___bank_scene_6, _scene_6

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_script_input_1 = 255
.globl ___bank_script_input_1

_script_input_1::
        VM_RESERVE              4

        ; Text Menu
        VM_LOAD_TEXT            0
        .asciz "\001\001\003\003\002\002\001Controls\n\002\001Home\n\002\001- Back"
        VM_OVERLAY_CLEAR        0, 0, 10, 5, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_OVERLAY_MOVE_TO      10, 18, .OVERLAY_SPEED_INSTANT
        VM_OVERLAY_MOVE_TO      10, 13, .OVERLAY_IN_SPEED
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/
        VM_CHOICE               VAR_VARIABLE_34, ^/(.UI_MENU_LAST_0 | .UI_MENU_CANCEL_B)/, 3
            .MENUITEM           1, 1, 1, 3, 0, 2
            .MENUITEM           1, 2, 1, 3, 1, 3
            .MENUITEM           1, 3, 1, 3, 2, 0
        VM_OVERLAY_MOVE_TO      10, 18, .OVERLAY_OUT_SPEED
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/
        VM_OVERLAY_MOVE_TO      0, 18, .OVERLAY_SPEED_INSTANT

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_VARIABLE_34, 1, 1$, 0
        VM_JUMP                 2$
1$:
        ; Call Script: Sounds - Menu Select
        VM_CALL_FAR             ___bank_script_sounds_menu_select, _script_sounds_menu_select

        ; Text Dialogue
        VM_LOAD_TEXT            0
        .asciz "Push.         : A\nStop          : Down\nOllie           : B\nChange Dir : Left/Right   "
        VM_OVERLAY_CLEAR        0, 0, 20, 6, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_OVERLAY_MOVE_TO      0, 12, .OVERLAY_IN_SPEED
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_OVERLAY_MOVE_TO      0, 18, .OVERLAY_OUT_SPEED
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/

2$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_VARIABLE_34, 2, 3$, 0
        VM_JUMP                 4$
3$:
        ; Call Script: Sounds - Menu Select
        VM_CALL_FAR             ___bank_script_sounds_menu_select, _script_sounds_menu_select

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 3456
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 384
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_6

4$:

        ; Stop Script
        VM_STOP
