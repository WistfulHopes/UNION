#pragma once
#include "CoreMinimal.h"
#include "ETravelRingLotteryGameMode.generated.h"

UENUM(BlueprintType)
enum class ETravelRingLotteryGameMode : uint8 {
    Default,
    Online,
    AllOpen,
    Limited,
};

