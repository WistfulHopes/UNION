#pragma once
#include "CoreMinimal.h"
#include "EMenuControllerViewType.generated.h"

UENUM(BlueprintType)
enum class EMenuControllerViewType : uint8 {
    Auto,
    DualShock4,
    DualSence,
    XInput,
    SwitchPro,
};

