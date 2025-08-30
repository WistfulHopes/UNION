#pragma once
#include "CoreMinimal.h"
#include "ECommonRivalRewardState.generated.h"

UENUM(BlueprintType)
enum class ECommonRivalRewardState : uint8 {
    Invalid,
    Locked,
    Active,
    Get,
};

