#pragma once
#include "CoreMinimal.h"
#include "ECollisionHitType.generated.h"

UENUM(BlueprintType)
enum class ECollisionHitType : uint8 {
    HitOnEnter,
    HitStay,
    HitOnLeave,
};

