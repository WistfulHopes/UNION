#pragma once
#include "CoreMinimal.h"
#include "EWheelDirection.generated.h"

UENUM(BlueprintType)
enum class EWheelDirection : uint8 {
    Up,
    Down,
    Left,
    Right,
};

