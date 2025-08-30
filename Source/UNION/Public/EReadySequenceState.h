#pragma once
#include "CoreMinimal.h"
#include "EReadySequenceState.generated.h"

UENUM(BlueprintType)
enum class EReadySequenceState : uint8 {
    Init,
    ReadyInputWait,
};

