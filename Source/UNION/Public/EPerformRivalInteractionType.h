#pragma once
#include "CoreMinimal.h"
#include "EPerformRivalInteractionType.generated.h"

UENUM(BlueprintType)
enum class EPerformRivalInteractionType : uint8 {
    Taunt,
    Annoyed,
    Confidence,
    Unique,
    Num,
    None = 255,
};

