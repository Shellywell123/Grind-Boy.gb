#pragma bank 255

// Scene: maba
// Triggers

#include "gbs_types.h"
#include "data/trigger_10_interact.h"
#include "data/trigger_11_interact.h"

BANKREF(scene_0_triggers)

const struct trigger_t scene_0_triggers[] = {
    {
        // Trigger 1,
        .x = 181,
        .y = 18,
        .width = 1,
        .height = 11,
        .script = TO_FAR_PTR_T(trigger_10_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 0,
        .y = 2,
        .width = 1,
        .height = 11,
        .script = TO_FAR_PTR_T(trigger_11_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
