#pragma once
#include "CoreMinimal.h"
#include "EGrandPrixEndingId.generated.h"

UENUM(BlueprintType)
enum class EGrandPrixEndingId : uint8 {
    OrbotCubotEnding,
    MemoryEnding,
    Num,
    Invalid = 255,
};

