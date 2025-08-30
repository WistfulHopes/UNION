#pragma once
#include "CoreMinimal.h"
#include "EChallengeGaugeCompleteAction.generated.h"

UENUM(BlueprintType)
enum class EChallengeGaugeCompleteAction : uint8 {
    In,
    Loop,
    Out,
};

