#pragma once
#include "CoreMinimal.h"
#include "ERoundTripMoveType.generated.h"

UENUM(BlueprintType)
enum class ERoundTripMoveType : uint8 {
    Linear,
    EaseIn,
    EaseOut,
    EaseInOut,
    Speed,
};

