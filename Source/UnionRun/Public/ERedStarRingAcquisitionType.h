#pragma once
#include "CoreMinimal.h"
#include "ERedStarRingAcquisitionType.generated.h"

UENUM(BlueprintType)
enum class ERedStarRingAcquisitionType : uint8 {
    NONE,
    New,
    Acquired,
    Unearned,
    Overlap,
};

