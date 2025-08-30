#pragma once
#include "CoreMinimal.h"
#include "EHintCategory.generated.h"

UENUM(BlueprintType)
enum class EHintCategory : uint8 {
    None,
    Control,
    Item,
    Course,
    GrandPrix,
    PartyRace,
    TimeTrial,
    Challenge,
    Lobby,
    RankMatch,
    Other,
    Num,
};

