#pragma bank 255

// Scene: level menu 4
// Triggers

#include "gbs_types.h"
#include "data/trigger_83_interact.h"
#include "data/trigger_84_interact.h"
#include "data/trigger_85_interact.h"
#include "data/trigger_86_interact.h"
#include "data/trigger_87_interact.h"
#include "data/trigger_88_interact.h"
#include "data/trigger_89_interact.h"
#include "data/trigger_90_interact.h"

BANKREF(scene_level_menu_4_triggers)

const struct trigger_t scene_level_menu_4_triggers[] = {
    {
        // Trigger 1,
        .x = 16,
        .y = 11,
        .width = 13,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_83_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 49,
        .y = 0,
        .width = 1,
        .height = 13,
        .script = TO_FAR_PTR_T(trigger_84_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 3,
        .x = 0,
        .y = 0,
        .width = 1,
        .height = 13,
        .script = TO_FAR_PTR_T(trigger_85_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 4,
        .x = 6,
        .y = 9,
        .width = 6,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_86_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 5,
        .x = 5,
        .y = 8,
        .width = 8,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_87_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 6,
        .x = 5,
        .y = 9,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_88_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 7,
        .x = 12,
        .y = 9,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_89_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 8,
        .x = 5,
        .y = 10,
        .width = 8,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_90_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
