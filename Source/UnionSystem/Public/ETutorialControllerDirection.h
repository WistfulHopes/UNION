#pragma once
#include "CoreMinimal.h"
#include "ETutorialControllerDirection.generated.h"

UENUM(BlueprintType)
enum class ETutorialControllerDirection : uint8 {
    Up,
    Right,
    Down,
    Left,
};

