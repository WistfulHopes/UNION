#pragma once
#include "CoreMinimal.h"
#include "ETimeTrialClearRankId.generated.h"

UENUM(BlueprintType)
enum class ETimeTrialClearRankId : uint8 {
    None,
    Bronze,
    Silver,
    Gold,
    Platinum,
    Num,
};

