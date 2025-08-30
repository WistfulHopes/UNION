#pragma once
#include "CoreMinimal.h"
#include "ERaceSettingMatchRule.generated.h"

UENUM(BlueprintType)
enum class ERaceSettingMatchRule : uint8 {
    Point,
    Time,
    TopPoint,
};

