#pragma once
#include "CoreMinimal.h"
#include "ERaceSettingCourseSelecting.generated.h"

UENUM(BlueprintType)
enum class ERaceSettingCourseSelecting : uint8 {
    EveryTimeManualSelect,
    RandomAutoSelect,
    VoteSelect,
};

