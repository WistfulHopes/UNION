#pragma once
#include "CoreMinimal.h"
#include "PFControllerTypeUseHint.generated.h"

UENUM(BlueprintType)
enum class PFControllerTypeUseHint : uint8 {
    None,
    PSController,
    XboxController,
    SwitchController,
};

