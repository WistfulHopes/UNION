#pragma once
#include "CoreMinimal.h"
#include "EEnergyAddBehaviorType.generated.h"

UENUM(BlueprintType)
enum class EEnergyAddBehaviorType : uint8 {
    UnKnown,
    ItemHit,
    TouchDash,
    AllTouchDash,
    DriftDash,
    AirTrick,
    DashPanel,
    DriftCharge,
    JustDash,
    SpinDrift,
    Ring,
    Slipstream,
    OddNumRank,
    Num,
};

