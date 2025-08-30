#pragma once
#include "CoreMinimal.h"
#include "EChallengeGuagePointStyle.generated.h"

UENUM(BlueprintType)
enum class EChallengeGuagePointStyle : uint8 {
    Normal,
    CheckPoint,
    Goal,
};

