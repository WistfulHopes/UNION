#pragma once
#include "CoreMinimal.h"
#include "EResultCameraState.generated.h"

UENUM(BlueprintType)
enum class EResultCameraState : uint8 {
    START_UP,
    PRODUCTION_PLAY,
    PRODUCTION_SWITCH,
    PAUSE,
    NUM,
};

