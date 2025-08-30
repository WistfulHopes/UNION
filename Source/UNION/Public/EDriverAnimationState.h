#pragma once
#include "CoreMinimal.h"
#include "EDriverAnimationState.generated.h"

UENUM(BlueprintType)
enum class EDriverAnimationState : uint8 {
    Squash,
    Idle,
    BackIdle,
    Steer,
    Drift,
    Item,
    Shunt,
    RoadReaction,
    AnimMontage,
    Spin,
    Num,
};

