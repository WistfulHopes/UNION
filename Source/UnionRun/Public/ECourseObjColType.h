#pragma once
#include "CoreMinimal.h"
#include "ECourseObjColType.generated.h"

UENUM(BlueprintType)
enum class ECourseObjColType : uint8 {
    None,
    BoostPad,
    Respot,
    BreakObject,
    CameraCollision,
    EventCollision,
    MoveCollision,
    Enemy,
    GuidedJump,
    PostEffectCollision,
    ResultCameraCollision,
    Num,
};

