#pragma bank 255

// Scene: mario
// Triggers

#include "gbs_types.h"
#include "data/trigger_0_interact.h"
#include "data/trigger_1_interact.h"
#include "data/trigger_2_interact.h"
#include "data/trigger_3_interact.h"
#include "data/trigger_4_interact.h"
#include "data/trigger_5_interact.h"
#include "data/trigger_6_interact.h"
#include "data/trigger_7_interact.h"
#include "data/trigger_8_interact.h"

BANKREF(scene_mario_triggers)

const struct trigger_t scene_mario_triggers[] = {
    {
        // Trigger 1,
        .x = 154,
        .y = 10,
        .width = 1,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_0_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 88,
        .y = 21,
        .width = 2,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_1_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 3,
        .x = 109,
        .y = 10,
        .width = 17,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_2_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 4,
        .x = 126,
        .y = 9,
        .width = 1,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_3_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 5,
        .x = 108,
        .y = 9,
        .width = 18,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_4_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 6,
        .x = 108,
        .y = 10,
        .width = 1,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_5_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 7,
        .x = 109,
        .y = 11,
        .width = 18,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_6_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 8,
        .x = 97,
        .y = 16,
        .width = 1,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_7_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 9,
        .x = 71,
        .y = 6,
        .width = 4,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_8_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
