#pragma once
#include "CoreMinimal.h"
#include "EPlayerLotteryRateDataTableType.generated.h"

UENUM(BlueprintType)
enum class EPlayerLotteryRateDataTableType : uint8 {
    PlayerTableTypeNormal,
    PlayerTableTypeDangerous,
    PlayerTableTypeOther,
    Num,
};

