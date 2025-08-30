#pragma once
#include "CoreMinimal.h"
#include "EHonorId.generated.h"

UENUM(BlueprintType)
enum class EHonorId : uint8 {
    Unknown,
    SelectedTravelRing,
    OvertakingAndTake1stPlaceBeforeGoal,
    OvertakingOnFinalLap,
    NoHitsTaken,
    Take1stPlaceFromLast,
    ItemAttackFirst,
    SpecialItemBoxCount,
    TimeInFirstPlace,
    AverageSpeed,
    RingsCount,
    ItemBoxCount,
    ItemHitCount,
    UsedItemCount,
    TrappedCount,
    DriftDashCount,
    AirTrickCount,
    DashPanelCount,
    TouchDashCount,
    TotalBoostCount,
    MultiPlayBonus,
    Num,
};

