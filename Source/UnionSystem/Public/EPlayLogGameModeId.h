#pragma once
#include "CoreMinimal.h"
#include "EPlayLogGameModeId.generated.h"

UENUM(BlueprintType)
enum class EPlayLogGameModeId : uint8 {
    GrandPrix,
    PartyRace,
    TimeTrial,
    RankMatch,
    FriendMatch,
    FriendMatch_NSW,
    Fest,
    Legend,
    Garage,
    GadgetCustom,
    Num,
};

