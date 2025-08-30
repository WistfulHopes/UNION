#pragma once
#include "CoreMinimal.h"
#include "EMachineBodyMaterialArea.generated.h"

UENUM(BlueprintType)
enum class EMachineBodyMaterialArea : uint8 {
    BodyFront,
    BodyFrontSub,
    BodyFrontCockpit,
    BodyFrontNoColorChange,
    BodyRear,
    BodyRearSub,
    BodyRearCockpit,
    BodyRearNoColorChange,
    BodySide,
    BodySideSub,
    BodySideVisible,
    BodySideNoColorChange,
    BodySideNoColorChangeVisible,
    Num,
};

