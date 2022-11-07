#pragma bank 255

// Scene: street
// Triggers

#include "gbs_types.h"
#include "data/trigger_12_interact.h"
#include "data/trigger_13_interact.h"
#include "data/trigger_14_interact.h"
#include "data/trigger_15_interact.h"
#include "data/trigger_16_interact.h"
#include "data/trigger_17_interact.h"
#include "data/trigger_18_interact.h"
#include "data/trigger_19_interact.h"
#include "data/trigger_20_interact.h"
#include "data/trigger_21_interact.h"
#include "data/trigger_22_interact.h"
#include "data/trigger_23_interact.h"

BANKREF(scene_street_triggers)

const struct trigger_t scene_street_triggers[] = {
    {
        // Trigger 1,
        .x = 45,
        .y = 15,
        .width = 60,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_12_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 160,
        .y = 0,
        .width = 1,
        .height = 17,
        .script = TO_FAR_PTR_T(trigger_13_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 3,
        .x = 71,
        .y = 8,
        .width = 17,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_14_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 4,
        .x = 70,
        .y = 7,
        .width = 19,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_15_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 5,
        .x = 70,
        .y = 9,
        .width = 19,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_16_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 6,
        .x = 70,
        .y = 8,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_17_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 7,
        .x = 88,
        .y = 8,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_18_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 8,
        .x = 130,
        .y = 10,
        .width = 18,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_19_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 9,
        .x = 129,
        .y = 9,
        .width = 20,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_20_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 10,
        .x = 129,
        .y = 11,
        .width = 20,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_21_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 11,
        .x = 129,
        .y = 10,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_22_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 12,
        .x = 148,
        .y = 10,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_23_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
