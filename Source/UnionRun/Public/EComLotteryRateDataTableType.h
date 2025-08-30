#pragma once
#include "CoreMinimal.h"
#include "EComLotteryRateDataTableType.generated.h"

UENUM(BlueprintType)
enum class EComLotteryRateDataTableType : uint8 {
    ComTableType01,
    ComTableType02,
    ComTableType03,
    ComTableType04,
    ComTableType05,
    Num,
};

