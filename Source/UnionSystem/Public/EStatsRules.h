#pragma once
#include "CoreMinimal.h"
#include "EStatsRules.generated.h"

UENUM(BlueprintType)
enum class EStatsRules : uint8 {
    Unknown,
    Sum,
    Max,
    Min,
    Num,
};

