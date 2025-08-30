#pragma once
#include "CoreMinimal.h"
#include "EMachineTrickType.generated.h"

UENUM(BlueprintType)
enum class EMachineTrickType : uint8 {
    None,
    FlipLeft,
    FlipRight,
    FlipFront = 4,
    FlipBack = 8,
    SpinLeft = 16,
    SpinRight = 32,
    CorkscrewLeft = 64,
    CorkscrewRight = 128,
};

