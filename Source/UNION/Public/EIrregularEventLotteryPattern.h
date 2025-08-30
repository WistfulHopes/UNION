#pragma once
#include "CoreMinimal.h"
#include "EIrregularEventLotteryPattern.generated.h"

UENUM(BlueprintType)
enum class EIrregularEventLotteryPattern : uint8 {
    None_None,
    None_Happen,
    Happen_None,
    Happen_Happen,
};

