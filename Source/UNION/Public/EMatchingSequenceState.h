#pragma once
#include "CoreMinimal.h"
#include "EMatchingSequenceState.generated.h"

UENUM(BlueprintType)
enum class EMatchingSequenceState : uint8 {
    Idle,
    Matching = 19,
    Exit = 72,
};

