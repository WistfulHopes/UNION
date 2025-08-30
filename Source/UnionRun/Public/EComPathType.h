#pragma once
#include "CoreMinimal.h"
#include "EComPathType.generated.h"

UENUM(BlueprintType)
enum class EComPathType : uint8 {
    NONE,
    MAIN_PATH,
    SUB_PATH,
    RING_PATH,
    SHORTCUT_PATH,
    ITEM_SHORTCUT_PATH,
    DASHBOARD_PATH,
    ANOTHER_WORLD_PATH,
    COURSE_GIMMIC_PATH,
    RANDOM_ID_PATH,
    Max,
};

