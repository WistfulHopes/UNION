#pragma once
#include "CoreMinimal.h"
#include "ELotteryRateType.generated.h"

UENUM(BlueprintType)
enum class ELotteryRateType : uint8 {
    NormalBox_Offline,
    NormalBox_Online,
    SpecialBox_Offline,
    SpecialBox_Online,
    Gadget,
    Num,
};

