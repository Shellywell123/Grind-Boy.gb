#pragma bank 255

// Scene: level menu 2
// Triggers

#include "gbs_types.h"
#include "data/trigger_71_interact.h"
#include "data/trigger_72_interact.h"
#include "data/trigger_73_interact.h"
#include "data/trigger_74_interact.h"

BANKREF(scene_level_menu_2_triggers)

const struct trigger_t scene_level_menu_2_triggers[] = {
    {
        // Trigger 1,
        .x = 0,
        .y = 0,
        .width = 1,
        .height = 13,
        .script = TO_FAR_PTR_T(trigger_71_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 18,
        .y = 8,
        .width = 1,
        .height = 3,
        .script = TO_FAR_PTR_T(trigger_72_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 3,
        .x = 95,
        .y = 0,
        .width = 1,
        .height = 13,
        .script = TO_FAR_PTR_T(trigger_73_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 4,
        .x = 49,
        .y = 0,
        .width = 1,
        .height = 13,
        .script = TO_FAR_PTR_T(trigger_74_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
