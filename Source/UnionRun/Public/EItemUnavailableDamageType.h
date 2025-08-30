#pragma once
#include "CoreMinimal.h"
#include "EItemUnavailableDamageType.generated.h"

UENUM(BlueprintType)
enum class EItemUnavailableDamageType : uint8 {
    Non,
    DecelerationDamage,
    NormalDamage,
    SpinDamage,
    SquashedDamage,
    LostDoubleDamage,
    LostSingleDamage,
    Num,
};

