#pragma once
#include "CoreMinimal.h"
#include "ERaceCameraMode.generated.h"

UENUM(BlueprintType)
enum class ERaceCameraMode : uint8 {
    NOT_USED,
    RESULT_CAMERA,
    RIVAL_CAMERA,
    REPLAY_CAMERA,
    NUM,
};

