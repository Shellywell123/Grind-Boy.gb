#pragma bank 255

// Scene: tutorial
// Triggers

#include "gbs_types.h"
#include "data/trigger_75_interact.h"
#include "data/trigger_76_interact.h"
#include "data/trigger_77_interact.h"
#include "data/trigger_78_interact.h"
#include "data/trigger_79_interact.h"
#include "data/trigger_80_interact.h"
#include "data/trigger_81_interact.h"
#include "data/trigger_82_interact.h"

BANKREF(scene_tutorial_triggers)

const struct trigger_t scene_tutorial_triggers[] = {
    {
        // Trigger 1,
        .x = 54,
        .y = 5,
        .width = 23,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_75_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 53,
        .y = 4,
        .width = 25,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_76_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 3,
        .x = 53,
        .y = 6,
        .width = 25,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_77_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 4,
        .x = 53,
        .y = 5,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_78_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 5,
        .x = 77,
        .y = 5,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_79_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 6,
        .x = 99,
        .y = 0,
        .width = 1,
        .height = 11,
        .script = TO_FAR_PTR_T(trigger_80_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 7,
        .x = 49,
        .y = 0,
        .width = 1,
        .height = 11,
        .script = TO_FAR_PTR_T(trigger_81_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 8,
        .x = 45,
        .y = 0,
        .width = 1,
        .height = 11,
        .script = TO_FAR_PTR_T(trigger_82_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
