#pragma once
#include "CoreMinimal.h"
#include "RacerReactionPriority.generated.h"

UENUM(BlueprintType)
enum class RacerReactionPriority : uint8 {
    Force,
    Stack,
    Normal,
    ForcePlayerVoice,
    Other,
    Result,
    Num,
};

