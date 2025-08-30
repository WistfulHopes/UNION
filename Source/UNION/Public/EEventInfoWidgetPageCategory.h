#pragma once
#include "CoreMinimal.h"
#include "EEventInfoWidgetPageCategory.generated.h"

UENUM(BlueprintType)
enum class EEventInfoWidgetPageCategory : uint8 {
    PointReward,
    FinalResult,
    WorldRanking,
    FriendRanking,
    OtherResult,
    RaceRule,
    Num,
    None,
};

