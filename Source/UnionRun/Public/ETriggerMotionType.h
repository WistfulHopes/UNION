#pragma once
#include "CoreMinimal.h"
#include "ETriggerMotionType.generated.h"

UENUM(BlueprintType)
enum class ETriggerMotionType : uint8 {
    Interval,
    Idle,
    OneShot,
};

