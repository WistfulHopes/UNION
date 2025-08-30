#pragma once
#include "CoreMinimal.h"
#include "EControllerButtonDirectionType.generated.h"

UENUM(BlueprintType)
enum class EControllerButtonDirectionType : uint8 {
    None,
    Up,
    Right,
    Down,
    Left,
    RightLeft,
    UpDown,
    Roll,
};

