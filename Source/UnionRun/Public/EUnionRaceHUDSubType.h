#pragma once
#include "CoreMinimal.h"
#include "EUnionRaceHUDSubType.generated.h"

UENUM(BlueprintType)
enum class EUnionRaceHUDSubType : uint8 {
    Item,
    CourseMap,
    Rank,
    RingNum,
    Lap,
    MyPlayerInfo,
    OtherPlayerInfo,
    ItemHitInfo,
    WarningInfo,
    RacerApproachInfo,
    Reaction,
    Gadget,
    Navigation,
    Irregular,
    Num,
};

