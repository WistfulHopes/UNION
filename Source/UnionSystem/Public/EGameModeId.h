#pragma once
#include "CoreMinimal.h"
#include "EGameModeId.generated.h"

UENUM(BlueprintType)
enum class EGameModeId : uint8 {
    None,
    GrandPrix,
    PartyRace,
    TimeTrial,
    RankMatch,
    FriendMatch,
    FriendMatch_NSW,
    Fest,
    Legend,
    Garage,
    Dev_FreeRun,
    Num,
};

