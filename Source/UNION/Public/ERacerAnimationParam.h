#pragma once
#include "CoreMinimal.h"
#include "ERacerAnimationParam.generated.h"

UENUM(BlueprintType)
enum class ERacerAnimationParam : uint8 {
    Acceleration,
    Steer,
    ShuntPower,
    ShuntDirX,
    ShuntDirY,
    MontagePlayRate,
    SpeedRate,
    AdditionSteer,
    SpeedKPH,
    Num,
};

