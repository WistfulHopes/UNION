#pragma once
#include "CoreMinimal.h"
#include "EAllowBounceType.generated.h"

UENUM(BlueprintType)
enum class EAllowBounceType : uint8 {
    None,
    Invisible,
    AttackItem,
    NormalCar = 4,
    MonsterTrackAndYellowDrill = 8,
};

