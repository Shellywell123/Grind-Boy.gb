#pragma bank 255

// Scene: tetris
// Triggers

#include "gbs_types.h"
#include "data/trigger_35_interact.h"
#include "data/trigger_36_interact.h"
#include "data/trigger_37_interact.h"
#include "data/trigger_38_interact.h"
#include "data/trigger_39_interact.h"
#include "data/trigger_40_interact.h"
#include "data/trigger_41_interact.h"
#include "data/trigger_42_interact.h"
#include "data/trigger_43_interact.h"
#include "data/trigger_44_interact.h"
#include "data/trigger_45_interact.h"
#include "data/trigger_46_interact.h"
#include "data/trigger_47_interact.h"
#include "data/trigger_48_interact.h"
#include "data/trigger_49_interact.h"
#include "data/trigger_50_interact.h"
#include "data/trigger_51_interact.h"
#include "data/trigger_52_interact.h"
#include "data/trigger_53_interact.h"
#include "data/trigger_54_interact.h"
#include "data/trigger_55_interact.h"
#include "data/trigger_56_interact.h"
#include "data/trigger_57_interact.h"
#include "data/trigger_58_interact.h"
#include "data/trigger_59_interact.h"
#include "data/trigger_60_interact.h"
#include "data/trigger_61_interact.h"
#include "data/trigger_62_interact.h"
#include "data/trigger_63_interact.h"
#include "data/trigger_64_interact.h"

BANKREF(scene_tetris_triggers)

const struct trigger_t scene_tetris_triggers[] = {
    {
        // Trigger 1,
        .x = 0,
        .y = 14,
        .width = 20,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_35_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 6,
        .y = 18,
        .width = 4,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_36_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 3,
        .x = 12,
        .y = 24,
        .width = 4,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_37_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 4,
        .x = 8,
        .y = 36,
        .width = 6,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_38_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 5,
        .x = 12,
        .y = 18,
        .width = 8,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_39_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 6,
        .x = 4,
        .y = 30,
        .width = 2,
        .height = 8,
        .script = TO_FAR_PTR_T(trigger_40_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 7,
        .x = 0,
        .y = 26,
        .width = 6,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_41_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 8,
        .x = 2,
        .y = 28,
        .width = 2,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_42_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 9,
        .x = 8,
        .y = 20,
        .width = 2,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_43_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 10,
        .x = 8,
        .y = 16,
        .width = 2,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_44_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 11,
        .x = 8,
        .y = 34,
        .width = 2,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_45_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 12,
        .x = 8,
        .y = 46,
        .width = 4,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_46_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 13,
        .x = 14,
        .y = 52,
        .width = 2,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_47_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 14,
        .x = 16,
        .y = 52,
        .width = 4,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_48_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 15,
        .x = 16,
        .y = 40,
        .width = 2,
        .height = 6,
        .script = TO_FAR_PTR_T(trigger_49_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 16,
        .x = 14,
        .y = 42,
        .width = 2,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_50_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 17,
        .x = 2,
        .y = 56,
        .width = 2,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_51_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 18,
        .x = 4,
        .y = 54,
        .width = 2,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_52_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 19,
        .x = 14,
        .y = 236,
        .width = 2,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_53_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 20,
        .x = 12,
        .y = 234,
        .width = 6,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_54_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 21,
        .x = 4,
        .y = 224,
        .width = 4,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_55_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 22,
        .x = 14,
        .y = 216,
        .width = 2,
        .height = 6,
        .script = TO_FAR_PTR_T(trigger_56_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 23,
        .x = 12,
        .y = 218,
        .width = 2,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_57_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 24,
        .x = 2,
        .y = 204,
        .width = 8,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_58_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 25,
        .x = 14,
        .y = 200,
        .width = 4,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_59_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 26,
        .x = 18,
        .y = 198,
        .width = 2,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_60_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 27,
        .x = 0,
        .y = 194,
        .width = 4,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_61_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 28,
        .x = 10,
        .y = 190,
        .width = 6,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_62_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 29,
        .x = 2,
        .y = 182,
        .width = 2,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_63_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 30,
        .x = 4,
        .y = 180,
        .width = 2,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_64_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
