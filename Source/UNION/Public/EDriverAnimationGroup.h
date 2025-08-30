#pragma once
#include "CoreMinimal.h"
#include "EDriverAnimationGroup.generated.h"

UENUM(BlueprintType)
enum class EDriverAnimationGroup : uint8 {
    Invalid,
    Default,
    Exclusive,
    All = 255,
};

