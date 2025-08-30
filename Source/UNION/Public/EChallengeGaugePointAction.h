#pragma once
#include "CoreMinimal.h"
#include "EChallengeGaugePointAction.generated.h"

UENUM(BlueprintType)
enum class EChallengeGaugePointAction : uint8 {
    Invalid,
    In,
    Loop,
    Get,
    Obtained,
    Out,
};

