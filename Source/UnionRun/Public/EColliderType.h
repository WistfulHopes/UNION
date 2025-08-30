#pragma once
#include "CoreMinimal.h"
#include "EColliderType.generated.h"

UENUM(BlueprintType)
enum class EColliderType : uint8 {
    None,
    BoostPad,
    ItemBox,
    Respot,
    Ring,
    JikkenBox,
    JikkenSphere,
    JikkenCapsule,
    JikkenCylinder,
    BreakObject,
    ThornBall,
    Bomb,
    Enemy,
    MoveCollision,
    EventCollision,
    Gimmick,
    CameraCollision,
    AttackItemCollision,
    Num,
};

