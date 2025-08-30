#pragma once
#include "CoreMinimal.h"
#include "EFestaRewardType.generated.h"

UENUM(BlueprintType)
enum class EFestaRewardType : uint8 {
    None,
    Nomal,
    Loop,
    Streak,
    Num,
};

