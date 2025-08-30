#pragma once
#include "CoreMinimal.h"
#include "ERaceCeremonySequenceExitCode.generated.h"

UENUM(BlueprintType)
enum class ERaceCeremonySequenceExitCode : uint8 {
    End,
    ToEnding,
};

