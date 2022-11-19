#pragma bank 255

// Scene: southbank
// Triggers

#include "gbs_types.h"
#include "data/trigger_0_interact.h"
#include "data/trigger_9_interact.h"

BANKREF(scene_7_triggers)

const struct trigger_t scene_7_triggers[] = {
    {
        // Trigger 1,
        .x = 181,
        .y = 1,
        .width = 1,
        .height = 11,
        .script = TO_FAR_PTR_T(trigger_0_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 0,
        .y = 2,
        .width = 1,
        .height = 11,
        .script = TO_FAR_PTR_T(trigger_9_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
