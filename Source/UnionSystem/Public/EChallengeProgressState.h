#pragma once
#include "CoreMinimal.h"
#include "EChallengeProgressState.generated.h"

UENUM(BlueprintType)
enum class EChallengeProgressState : uint8 {
    NotAcquired,
    InProgress,
    Acquired,
    Verified,
    Num,
};

