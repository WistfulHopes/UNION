#pragma once
#include "CoreMinimal.h"
#include "EGarageCameraMovementMode.generated.h"

UENUM(BlueprintType)
enum class EGarageCameraMovementMode : uint8 {
    Transform,
    Arm,
};

