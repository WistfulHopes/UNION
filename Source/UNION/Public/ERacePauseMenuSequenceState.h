#pragma once
#include "CoreMinimal.h"
#include "ERacePauseMenuSequenceState.generated.h"

UENUM(BlueprintType)
enum class ERacePauseMenuSequenceState : uint8 {
    Idle,
    Select,
    Exit,
};

