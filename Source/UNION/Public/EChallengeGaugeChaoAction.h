#pragma once
#include "CoreMinimal.h"
#include "EChallengeGaugeChaoAction.generated.h"

UENUM(BlueprintType)
enum class EChallengeGaugeChaoAction : uint8 {
    Invalid,
    In,
    Out,
    Move,
    Wait,
    Rest,
    Get_S,
    Get_L,
    ChangeIn,
    ChangeOut,
};

