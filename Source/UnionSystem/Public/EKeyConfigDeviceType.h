#pragma once
#include "CoreMinimal.h"
#include "EKeyConfigDeviceType.generated.h"

UENUM(BlueprintType)
enum class EKeyConfigDeviceType : uint8 {
    Gamepad,
    Keyboard,
};

