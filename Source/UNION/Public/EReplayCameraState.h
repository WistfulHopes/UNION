#pragma once
#include "CoreMinimal.h"
#include "EReplayCameraState.generated.h"

UENUM(BlueprintType)
enum class EReplayCameraState : uint8 {
    START_UP,
    PLAY_RACE_CAMERA,
    PLAY_FREE_CAMERA,
    PAUSE,
    NUM,
};

