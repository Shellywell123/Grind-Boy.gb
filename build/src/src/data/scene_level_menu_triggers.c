#pragma bank 255

// Scene: level_menu
// Triggers

#include "gbs_types.h"
#include "data/trigger_9_interact.h"
#include "data/trigger_10_interact.h"
#include "data/trigger_11_interact.h"

BANKREF(scene_level_menu_triggers)

const struct trigger_t scene_level_menu_triggers[] = {
    {
        // Trigger 1,
        .x = 21,
        .y = 10,
        .width = 4,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_9_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 45,
        .y = 11,
        .width = 5,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_10_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 3,
        .x = 70,
        .y = 0,
        .width = 1,
        .height = 13,
        .script = TO_FAR_PTR_T(trigger_11_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
