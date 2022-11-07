.module scene_title_screen_init

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step, ___bank_scene_credits, _scene_credits, ___bank_scene_test, _scene_test, ___bank_scene_pac, _scene_pac, ___bank_scene_tetris, _scene_tetris, ___bank_scene_mario, _scene_mario, ___bank_scene_tutorial, _scene_tutorial, ___bank_scene_level_menu, _scene_level_menu, ___bank_scene_street, _scene_street

.area _CODE_255

.LOCAL_ACTOR = -4
.LOCAL_TMP1_WAIT_ARGS = -5

___bank_scene_title_screen_init = 255
.globl ___bank_scene_title_screen_init

_scene_title_screen_init::
        VM_LOCK

        VM_RESERVE              5

        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP1_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Wait For Input
        VM_INPUT_WAIT           240

        ; Call Script: Sounds - Menu Select
        VM_CALL_FAR             ___bank_script_sounds_menu_select, _script_sounds_menu_select

2$:
        ; Text Multiple Choice
        VM_LOAD_TEXT            0
        .asciz "\001\001\003\003\002Go Skate.\n\003\003\003Extra"
        VM_OVERLAY_CLEAR        0, 0, 20, 4, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_OVERLAY_MOVE_TO      0, 14, .OVERLAY_IN_SPEED
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/
        VM_CHOICE               VAR_S1_MENU_CHOICE, ^/(.UI_MENU_LAST_0 | .UI_MENU_CANCEL_B)/, 2
            .MENUITEM           1, 1, 0, 0, 0, 2
            .MENUITEM           1, 2, 0, 0, 1, 0
        VM_OVERLAY_MOVE_TO      0, 18, .OVERLAY_OUT_SPEED
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/

        ; If Variable True
        VM_IF_CONST             .GT, VAR_S1_MENU_CHOICE, 0, 3$, 0
        ; Text Menu
        VM_LOAD_TEXT            0
        .asciz "\001\001\003\003\002\002\001Creds\n\002\001DevOps\n\002\001-back"
        VM_OVERLAY_CLEAR        0, 0, 20, 5, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_OVERLAY_MOVE_TO      0, 13, .OVERLAY_IN_SPEED
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/
        VM_CHOICE               VAR_S1_EXTRA_CHOICE, ^/(.UI_MENU_LAST_0 | .UI_MENU_CANCEL_B)/, 3
            .MENUITEM           1, 1, 1, 3, 0, 2
            .MENUITEM           1, 2, 1, 3, 1, 3
            .MENUITEM           1, 3, 1, 3, 2, 0
        VM_OVERLAY_MOVE_TO      0, 18, .OVERLAY_OUT_SPEED
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S1_EXTRA_CHOICE, 1, 5$, 0
        VM_JUMP                 6$
5$:
        ; Call Script: Sounds - Menu Select
        VM_CALL_FAR             ___bank_script_sounds_menu_select, _script_sounds_menu_select

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 1152
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 896
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_RIGHT
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_credits

6$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S1_EXTRA_CHOICE, 2, 7$, 0
        VM_JUMP                 8$
7$:
        ; Call Script: Sounds - Menu Select
        VM_CALL_FAR             ___bank_script_sounds_menu_select, _script_sounds_menu_select

        ; Text Menu
        VM_LOAD_TEXT            0
        .asciz "\001\001\003\003\002\002\001BigMan\n\002\001LvlSel\n\002\001-back"
        VM_OVERLAY_CLEAR        0, 0, 20, 5, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_OVERLAY_MOVE_TO      0, 13, .OVERLAY_IN_SPEED
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/
        VM_CHOICE               VAR_S1_DEV_CHOICE, ^/(.UI_MENU_LAST_0 | .UI_MENU_CANCEL_B)/, 3
            .MENUITEM           1, 1, 1, 3, 0, 2
            .MENUITEM           1, 2, 1, 3, 1, 3
            .MENUITEM           1, 3, 1, 3, 2, 0
        VM_OVERLAY_MOVE_TO      0, 18, .OVERLAY_OUT_SPEED
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S1_DEV_CHOICE, 1, 9$, 0
        VM_JUMP                 10$
9$:
        ; Call Script: Sounds - Menu Select
        VM_CALL_FAR             ___bank_script_sounds_menu_select, _script_sounds_menu_select

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 4608
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 8448
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_RIGHT
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_test

10$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S1_DEV_CHOICE, 2, 11$, 0
        VM_JUMP                 12$
11$:
        ; Call Script: Sounds - Menu Select
        VM_CALL_FAR             ___bank_script_sounds_menu_select, _script_sounds_menu_select

        ; Text Menu
        VM_LOAD_TEXT            0
        .asciz "\001\001\003\003\002\002\001PacMan\n\002\001Tetris\n\002\001Mario\n\002\001-back"
        VM_OVERLAY_CLEAR        0, 0, 20, 6, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_OVERLAY_MOVE_TO      0, 12, .OVERLAY_IN_SPEED
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/
        VM_CHOICE               VAR_S1_LVL_SEL, ^/(.UI_MENU_LAST_0 | .UI_MENU_CANCEL_B)/, 4
            .MENUITEM           1, 1, 1, 4, 0, 2
            .MENUITEM           1, 2, 1, 4, 1, 3
            .MENUITEM           1, 3, 1, 4, 2, 4
            .MENUITEM           1, 4, 1, 4, 3, 0
        VM_OVERLAY_MOVE_TO      0, 18, .OVERLAY_OUT_SPEED
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S1_LVL_SEL, 1, 13$, 0
        VM_JUMP                 14$
13$:
        ; Call Script: Sounds - Menu Select
        VM_CALL_FAR             ___bank_script_sounds_menu_select, _script_sounds_menu_select

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 0

        ; Actor Set Spritesheet
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_pac_skater_pac, _sprite_pac_skater_pac

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 4864
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 8704
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_LEFT
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_pac

14$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S1_LVL_SEL, 2, 15$, 0
        VM_JUMP                 16$
15$:
        ; Call Script: Sounds - Menu Select
        VM_CALL_FAR             ___bank_script_sounds_menu_select, _script_sounds_menu_select

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 1280
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 32128
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_UP
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_tetris

16$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S1_LVL_SEL, 3, 17$, 0
        VM_JUMP                 18$
17$:
        ; Call Script: Sounds - Menu Select
        VM_CALL_FAR             ___bank_script_sounds_menu_select, _script_sounds_menu_select

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 512
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 896
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_RIGHT
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_mario

18$:

12$:

8$:

        VM_JUMP                 4$
3$:
        ; Call Script: Sounds - Menu Select
        VM_CALL_FAR             ___bank_script_sounds_menu_select, _script_sounds_menu_select

        ; Text Menu
        VM_LOAD_TEXT            0
        .asciz "\001\001\003\003\002\002\001Train\n\002\001Arcade\n\002\001Street\n\002\001-back"
        VM_OVERLAY_CLEAR        0, 0, 20, 6, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_OVERLAY_MOVE_TO      0, 12, .OVERLAY_IN_SPEED
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/
        VM_CHOICE               VAR_S1_PLAY_CHOICE, ^/(.UI_MENU_LAST_0 | .UI_MENU_CANCEL_B)/, 4
            .MENUITEM           1, 1, 1, 4, 0, 2
            .MENUITEM           1, 2, 1, 4, 1, 3
            .MENUITEM           1, 3, 1, 4, 2, 4
            .MENUITEM           1, 4, 1, 4, 3, 0
        VM_OVERLAY_MOVE_TO      0, 18, .OVERLAY_OUT_SPEED
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S1_PLAY_CHOICE, 1, 19$, 0
        VM_JUMP                 20$
19$:
        ; Call Script: Sounds - Menu Select
        VM_CALL_FAR             ___bank_script_sounds_menu_select, _script_sounds_menu_select

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 15
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 896
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 1024
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_RIGHT
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_tutorial

20$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S1_PLAY_CHOICE, 2, 21$, 0
        VM_JUMP                 22$
21$:
        ; Call Script: Sounds - Menu Select
        VM_CALL_FAR             ___bank_script_sounds_menu_select, _script_sounds_menu_select

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 15
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 256
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 1536
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_RIGHT
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_level_menu

22$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S1_PLAY_CHOICE, 3, 23$, 0
        VM_JUMP                 24$
23$:
        ; Call Script: Sounds - Menu Select
        VM_CALL_FAR             ___bank_script_sounds_menu_select, _script_sounds_menu_select

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 15
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 128
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 640
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_RIGHT
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_street

24$:

4$:

        VM_JUMP                 2$
        ; Stop Script
        VM_STOP
