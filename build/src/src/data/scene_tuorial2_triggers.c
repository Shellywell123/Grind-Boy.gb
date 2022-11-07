#pragma bank 255

// Scene: tuorial2
// Triggers

#include "gbs_types.h"
#include "data/trigger_91_interact.h"
#include "data/trigger_92_interact.h"
#include "data/trigger_93_interact.h"
#include "data/trigger_94_interact.h"
#include "data/trigger_95_interact.h"
#include "data/trigger_96_interact.h"
#include "data/trigger_97_interact.h"

BANKREF(scene_tuorial2_triggers)

const struct trigger_t scene_tuorial2_triggers[] = {
    {
        // Trigger 1,
        .x = 0,
        .y = 0,
        .width = 1,
        .height = 11,
        .script = TO_FAR_PTR_T(trigger_91_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 59,
        .y = 0,
        .width = 1,
        .height = 12,
        .script = TO_FAR_PTR_T(trigger_92_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 3,
        .x = 12,
        .y = 5,
        .width = 22,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_93_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 4,
        .x = 11,
        .y = 4,
        .width = 24,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_94_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 5,
        .x = 11,
        .y = 5,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_95_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 6,
        .x = 11,
        .y = 6,
        .width = 24,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_96_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 7,
        .x = 34,
        .y = 5,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_97_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
