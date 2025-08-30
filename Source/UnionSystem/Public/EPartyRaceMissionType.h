#pragma once
#include "CoreMinimal.h"
#include "EPartyRaceMissionType.generated.h"

UENUM(BlueprintType)
enum class EPartyRaceMissionType : uint8 {
    Invalid,
    OvertakingCount,
    HitTakenCount,
    TimeInFirstPlace,
    RingCount,
    ItemBoxCount,
    SpecialItemBoxCount,
    UsedItemCount,
    AttackItemCount,
    DriftDashCount,
    AirTrickCount,
    DashPanelCount,
    SelectedTravelRing,
    Num,
    None = 255,
};

