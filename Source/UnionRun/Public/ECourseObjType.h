#pragma once
#include "CoreMinimal.h"
#include "ECourseObjType.generated.h"

UENUM(BlueprintType)
enum class ECourseObjType : uint8 {
    None,
    Balloon,
    BalloonJump,
    BalloonJumpMove,
    Bollard,
    FlyingBounce,
    RingCircle,
    Num,
};

