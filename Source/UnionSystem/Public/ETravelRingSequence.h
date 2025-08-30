#pragma once
#include "CoreMinimal.h"
#include "ETravelRingSequence.generated.h"

UENUM(BlueprintType)
enum class ETravelRingSequence : uint8 {
    Neutral,
    StartSelect,
    SwitchLeft,
    SwitchRight,
    ConfirmLeft,
    ConfirmRight,
    JustBeforeOnLeft,
    JustBeforeOnRight,
    ConflictStart,
    ConflictFixLeft,
    ConflictFixRight,
    Main3OpenLeft,
    CloseRing,
};

