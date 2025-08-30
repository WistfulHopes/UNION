#pragma once
#include "CoreMinimal.h"
#include "EHoldItemPoolQuality.generated.h"

UENUM(BlueprintType)
enum class EHoldItemPoolQuality : uint8 {
    High,
    Low,
    Default,
    Num,
};

