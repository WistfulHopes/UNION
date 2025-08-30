#pragma once
#include "CoreMinimal.h"
#include "EUnionControllerType.generated.h"

UENUM(BlueprintType)
enum class EUnionControllerType : uint8 {
    Pro,
    DualJoyCon,
    Handheld,
    JoyCon,
};

