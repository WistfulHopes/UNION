#pragma once
#include "CoreMinimal.h"
#include "ELobbyCameraMoveType.generated.h"

UENUM(BlueprintType)
enum class ELobbyCameraMoveType : uint8 {
    LCM_CAMERA_ZOOMIN,
    LCM_CAMERA_ZOOMOUT,
    LCM_CAMERA_SLIDE,
    LCM_CAMERA_MOVE,
};

