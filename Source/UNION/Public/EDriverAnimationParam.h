#pragma once
#include "CoreMinimal.h"
#include "EDriverAnimationParam.generated.h"

UENUM(BlueprintType)
enum class EDriverAnimationParam : uint8 {
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

