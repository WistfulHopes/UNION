#pragma once
#include "CoreMinimal.h"
#include "EBreakConditionType.generated.h"

UENUM(BlueprintType)
enum class EBreakConditionType : uint8 {
    Speed,
    Invincible,
    All,
    NoBreak,
    Num,
};

