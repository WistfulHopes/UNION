#pragma once
#include "CoreMinimal.h"
#include "EGroupBonusType.generated.h"

UENUM(BlueprintType)
enum class EGroupBonusType : uint8 {
    UnKnown,
    GetRing,
    ItemHit,
    DriftBoost,
    ChargeDashMax,
    JustDash,
    SpinDrift,
    AirTrickRotation,
    TouchDash,
    AllTouchDash,
    RocketPunchHit,
    DashPanel,
    Slipstream,
    OddNumRank,
    Extreme,
    Num,
};

