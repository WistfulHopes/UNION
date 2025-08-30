#pragma once
#include "CoreMinimal.h"
#include "EGarageCameraMovementTransformDataId.generated.h"

UENUM(BlueprintType)
enum class EGarageCameraMovementTransformDataId : uint8 {
    Init,
    SpeedTypeBody,
    SpeedTypeTire,
    AcceleTypeBody,
    AcceleTypeTire,
    HandleTypeBody,
    HandleTypeTire,
    PowerTypeBody,
    PowerTypeTire,
    DashTypeBody,
    DashTypeTire,
    FrontStickerSelect,
    RearStickerSelect,
};

