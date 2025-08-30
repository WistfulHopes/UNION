#pragma once
#include "CoreMinimal.h"
#include "ETravelRingLotteryMethod.generated.h"

UENUM(BlueprintType)
enum class ETravelRingLotteryMethod : uint8 {
    LotteryBoth,
    ManualBoth,
    LotteryLeft,
    LotteryRight,
};

