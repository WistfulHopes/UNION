#pragma once
#include "CoreMinimal.h"
#include "EGUNHunterShootState.generated.h"

UENUM(BlueprintType)
enum class EGUNHunterShootState : uint8 {
    None,
    Start,
    Shoot,
    ShootEnd,
};

