#pragma once
#include "CoreMinimal.h"
#include "ETriggerMotionState.generated.h"

UENUM(BlueprintType)
enum class ETriggerMotionState : uint8 {
    NoTrigger,
    Idle,
    OneShot,
    End,
};

