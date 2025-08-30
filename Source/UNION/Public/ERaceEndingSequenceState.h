#pragma once
#include "CoreMinimal.h"
#include "ERaceEndingSequenceState.generated.h"

UENUM(BlueprintType)
enum class ERaceEndingSequenceState : uint8 {
    Idle,
    Ending,
    AfterEndingEvent,
    Exit,
};

