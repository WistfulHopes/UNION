#pragma once
#include "CoreMinimal.h"
#include "EResultRewardType.generated.h"

UENUM(BlueprintType)
enum class EResultRewardType : uint8 {
    Invalid,
    Rank,
    Honor,
    RedStarRing,
    GrandPrixRivalWin,
    RaceParkRivalTeamWin,
    MultiplayBonus,
};

