#pragma once
#include "CoreMinimal.h"
#include "EDriverOneshotAnimationId.generated.h"

UENUM(BlueprintType)
enum class EDriverOneshotAnimationId : uint8 {
    Crash,
    DashHigh,
    DashLow,
    DashFailure,
    TrickSpinLeft,
    TrickSpinRight,
    TrickFlipLeft,
    TrickFlipRight,
    TrickFlipFront,
    TrickFlipBack,
    HitItem,
    WheelspinLoop,
    Num,
};

