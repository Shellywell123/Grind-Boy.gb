#pragma bank 255

// Scene: level menu 3
// Triggers

#include "gbs_types.h"
#include "data/trigger_100_interact.h"
#include "data/trigger_101_interact.h"
#include "data/trigger_102_interact.h"

BANKREF(scene_level_menu_3_triggers)

const struct trigger_t scene_level_menu_3_triggers[] = {
    {
        // Trigger 1,
        .x = 0,
        .y = 0,
        .width = 1,
        .height = 13,
        .script = TO_FAR_PTR_T(trigger_100_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 59,
        .y = 0,
        .width = 1,
        .height = 13,
        .script = TO_FAR_PTR_T(trigger_101_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 3,
        .x = 26,
        .y = 11,
        .width = 6,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_102_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
