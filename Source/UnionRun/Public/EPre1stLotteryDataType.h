#pragma once
#include "CoreMinimal.h"
#include "EPre1stLotteryDataType.generated.h"

UENUM(BlueprintType)
enum class EPre1stLotteryDataType : uint8 {
    Rank_1,
    Race_2_Distance_200M,
    Race_2_Distance_OVER_200M,
    Race_3_Distance_200M,
    Race_3_Distance_OVER_200M,
    Race_4TO12_Distance_200M,
    Race_4TO12_Distance_OVER_200M,
    Num,
};

