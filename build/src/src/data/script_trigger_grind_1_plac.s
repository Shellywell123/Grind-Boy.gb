.module script_trigger_grind_1_plac

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.SCRIPT_ARG_INDIRECT_0_VARIABLE = -8
.SCRIPT_ARG_INDIRECT_1_VARIABLE = -9
.LOCAL_TMP0_INPUT = -4
.LOCAL_TMP1_INPUT = -4
.LOCAL_ACTOR = -4
.LOCAL_TMP6_INPUT = -4
.LOCAL_TMP3_INPUT = -5
.LOCAL_TMP4_INPUT = -5
.LOCAL_TMP5_INPUT = -5

___bank_script_trigger_grind_1_plac = 255
.globl ___bank_script_trigger_grind_1_plac

_script_trigger_grind_1_plac::
        VM_RESERVE              5

        ; If Input
        VM_GET_INT8             .LOCAL_TMP0_INPUT, ^/(_joypads + 1)/
        VM_RPN
            .R_REF      .LOCAL_TMP0_INPUT
            .R_INT8     16
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 1$, 1

        ; If Variable True
        VM_PUSH_VALUE_IND       .SCRIPT_ARG_INDIRECT_0_VARIABLE
        VM_IF_CONST             .GT, .ARG0, 0, 3$, 1
        VM_JUMP                 4$
3$:
        ; If Input
        VM_GET_INT8             .LOCAL_TMP1_INPUT, ^/(_joypads + 1)/
        VM_RPN
            .R_REF      .LOCAL_TMP1_INPUT
            .R_INT8     1
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 5$, 1

        VM_JUMP                 6$
5$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 0

        ; Actor Move Relative
        VM_ACTOR_GET_POS        .LOCAL_ACTOR
        VM_RPN
            .R_REF      ^/(.LOCAL_ACTOR + 1)/
            .R_INT16    128
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_REF      ^/(.LOCAL_ACTOR + 2)/
            .R_INT16    128
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_STOP
        VM_SET                  ^/(.LOCAL_ACTOR + 1 - 2)/, .ARG1
        VM_SET                  ^/(.LOCAL_ACTOR + 2 - 2)/, .ARG0
        VM_POP                  2
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 3)/, 0
        VM_ACTOR_MOVE_TO        .LOCAL_ACTOR

6$:

        ; If Input
        VM_GET_INT8             .LOCAL_TMP3_INPUT, ^/(_joypads + 1)/
        VM_RPN
            .R_REF      .LOCAL_TMP3_INPUT
            .R_INT8     2
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 7$, 1

        VM_JUMP                 8$
7$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 0

        ; Actor Move Relative
        VM_ACTOR_GET_POS        .LOCAL_ACTOR
        VM_RPN
            .R_REF      ^/(.LOCAL_ACTOR + 1)/
            .R_INT16    -128
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_REF      ^/(.LOCAL_ACTOR + 2)/
            .R_INT16    128
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_STOP
        VM_SET                  ^/(.LOCAL_ACTOR + 1 - 2)/, .ARG1
        VM_SET                  ^/(.LOCAL_ACTOR + 2 - 2)/, .ARG0
        VM_POP                  2
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 3)/, 0
        VM_ACTOR_MOVE_TO        .LOCAL_ACTOR

8$:

4$:

        VM_JUMP                 2$
1$:
        ; If Input
        VM_GET_INT8             .LOCAL_TMP4_INPUT, ^/(_joypads + 1)/
        VM_RPN
            .R_REF      .LOCAL_TMP4_INPUT
            .R_INT8     4
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 9$, 1

        VM_JUMP                 10$
9$:
        ; Player Set Spritesheet
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_trick_nollie, _sprite_trick_nollie

10$:

        ; If Input
        VM_GET_INT8             .LOCAL_TMP5_INPUT, ^/(_joypads + 1)/
        VM_RPN
            .R_REF      .LOCAL_TMP5_INPUT
            .R_INT8     8
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 11$, 1

        VM_JUMP                 12$
11$:
        ; Player Set Spritesheet
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_sprite_trick_backtail, _sprite_trick_backtail

12$:

        ; If Input
        VM_GET_INT8             .LOCAL_TMP6_INPUT, ^/(_joypads + 1)/
        VM_RPN
            .R_REF      .LOCAL_TMP6_INPUT
            .R_INT8     3
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 13$, 1

        VM_JUMP                 14$
13$:
        ; Sound Play Crash
        VM_SFX_PLAY             ___bank_sound_legacy_3, _sound_legacy_3, ___mute_mask_sound_legacy_3, .SFX_PRIORITY_NORMAL

14$:

2$:

        VM_RESERVE              -5
        VM_RET_FAR_N            2
