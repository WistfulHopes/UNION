#pragma once
#include "CoreMinimal.h"
#include "ETeamRankAndMap.generated.h"

UENUM(BlueprintType)
enum class ETeamRankAndMap : uint8 {
    TeamRankAndMap,
    MapOnly,
    Invisible,
    Num,
};

