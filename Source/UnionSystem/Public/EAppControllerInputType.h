#pragma once
#include "CoreMinimal.h"
#include "EAppControllerInputType.generated.h"

UENUM(BlueprintType)
enum class EAppControllerInputType : uint8 {
    Mouse,
    Keyboard,
    Gamepad,
    Touch,
    Count,
};

