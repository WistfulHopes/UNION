#pragma once
#include "CoreMinimal.h"
#include "ETopMenuGameMode.generated.h"

UENUM(BlueprintType)
enum class ETopMenuGameMode : uint8 {
    None,
    GrandPrix,
    Party,
    TimeTrial,
    RankMatch,
    FriendMatch,
    Festa,
    Legend,
    Max,
};

