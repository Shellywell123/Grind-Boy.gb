#pragma bank 255

// Scene: level 3
// Triggers

#include "gbs_types.h"
#include "data/trigger_24_interact.h"
#include "data/trigger_25_interact.h"
#include "data/trigger_26_interact.h"
#include "data/trigger_27_interact.h"
#include "data/trigger_28_interact.h"
#include "data/trigger_29_interact.h"
#include "data/trigger_30_interact.h"
#include "data/trigger_31_interact.h"
#include "data/trigger_32_interact.h"
#include "data/trigger_33_interact.h"
#include "data/trigger_34_interact.h"

BANKREF(scene_level_3_triggers)

const struct trigger_t scene_level_3_triggers[] = {
    {
        // Trigger 1,
        .x = 160,
        .y = 0,
        .width = 1,
        .height = 14,
        .script = TO_FAR_PTR_T(trigger_24_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 53,
        .y = 17,
        .width = 74,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_25_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 3,
        .x = 103,
        .y = 7,
        .width = 30,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_26_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 4,
        .x = 102,
        .y = 6,
        .width = 32,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_27_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 5,
        .x = 102,
        .y = 8,
        .width = 32,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_28_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 6,
        .x = 102,
        .y = 7,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_29_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 7,
        .x = 133,
        .y = 7,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_30_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 8,
        .x = 142,
        .y = 7,
        .width = 19,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_31_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 9,
        .x = 141,
        .y = 6,
        .width = 20,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_32_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 10,
        .x = 141,
        .y = 7,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_33_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 11,
        .x = 141,
        .y = 8,
        .width = 20,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_34_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
