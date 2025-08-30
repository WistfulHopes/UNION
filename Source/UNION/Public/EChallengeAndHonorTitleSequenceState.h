#pragma once
#include "CoreMinimal.h"
#include "EChallengeAndHonorTitleSequenceState.generated.h"

UENUM(BlueprintType)
enum class EChallengeAndHonorTitleSequenceState : uint8 {
    InitState,
    ChallengeState = 51,
    HonorTitleState,
};

