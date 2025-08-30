#pragma once
#include "CoreMinimal.h"
#include "EUnionPresenceType.generated.h"

UENUM(BlueprintType)
enum class EUnionPresenceType : uint8 {
    Unknown,
    PlayingGrandPrix,
    PlayingPartyRace,
    PlayingTimeTrial,
    PlayingRankMatch,
    PlayingFest,
    PlayingChampionship,
    PlayingApplication,
    Num,
};

