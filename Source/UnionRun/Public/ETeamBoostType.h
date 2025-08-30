#pragma once
#include "CoreMinimal.h"
#include "ETeamBoostType.generated.h"

UENUM(BlueprintType)
enum class ETeamBoostType : uint8 {
    UnKnown,
    RingEnergy,
    FriendEnergy,
    Num,
};

