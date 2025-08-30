#pragma once
#include "CoreMinimal.h"
#include "EUnionEventId.generated.h"

UENUM(BlueprintType)
enum class EUnionEventId : uint8 {
    None,
    TravelRing,
    RaceInitialized,
    DomainStart,
    DomainEnd,
    FirstLapEnd,
    SecondLapEnd,
    StartFireworks,
    StartEnemy,
    StartGimmick,
    ActiveDomainObject,
    StageCommon,
};

