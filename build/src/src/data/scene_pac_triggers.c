#pragma bank 255

// Scene: pac
// Triggers

#include "gbs_types.h"
#include "data/trigger_98_interact.h"
#include "data/trigger_99_interact.h"

BANKREF(scene_pac_triggers)

const struct trigger_t scene_pac_triggers[] = {
    {
        // Trigger 1,
        .x = 79,
        .y = 30,
        .width = 1,
        .height = 7,
        .script = TO_FAR_PTR_T(trigger_98_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 0,
        .y = 30,
        .width = 1,
        .height = 7,
        .script = TO_FAR_PTR_T(trigger_99_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
