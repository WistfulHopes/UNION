#pragma once
#include "CoreMinimal.h"
#include "ERivalCameraState.generated.h"

UENUM(BlueprintType)
enum class ERivalCameraState : uint8 {
    START_UP,
    PRODUCTION_PLAY,
    PAUSE,
    NUM,
};

