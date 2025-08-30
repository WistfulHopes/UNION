#pragma once
#include "CoreMinimal.h"
#include "EPartyRacePreset.generated.h"

UENUM(BlueprintType)
enum class EPartyRacePreset : uint8 {
    Casual,
    Festival,
    KingRace,
    RocketShooting,
    MonsterTruck,
    Custom,
    QuickMatch,
    BattleRush,
    GroupMatch,
    BoostTimeRace,
    Dangerous,
    Group3_RingGet,
    Group2_TouchDash,
    Group2_ItemHit,
    Group3_TouchDash,
    Group2_DashPanel,
    Extreme,
    Num,
};

