#pragma once
#include "CoreMinimal.h"
#include "ERaceCeremonySequenceState.generated.h"

UENUM(BlueprintType)
enum class ERaceCeremonySequenceState : uint8 {
    Idle,
    Ceremony,
    AfterCeremonyEvent,
    Exit,
};

