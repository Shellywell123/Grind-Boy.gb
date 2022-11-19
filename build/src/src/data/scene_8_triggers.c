#pragma bank 255

// Scene: love
// Triggers

#include "gbs_types.h"
#include "data/trigger_12_interact.h"
#include "data/trigger_13_interact.h"

BANKREF(scene_8_triggers)

const struct trigger_t scene_8_triggers[] = {
    {
        // Trigger 1,
        .x = 181,
        .y = 1,
        .width = 1,
        .height = 11,
        .script = TO_FAR_PTR_T(trigger_12_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 0,
        .y = 2,
        .width = 1,
        .height = 11,
        .script = TO_FAR_PTR_T(trigger_13_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
