#pragma once
#include "CoreMinimal.h"
#include "ETravelRingScreenLotteryPattern.generated.h"

UENUM(BlueprintType)
enum class ETravelRingScreenLotteryPattern : uint8 {
    Open_Open,
    Close_Open,
    Open_Close,
    Close_Close,
};

