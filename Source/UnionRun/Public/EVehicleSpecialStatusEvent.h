#pragma once
#include "CoreMinimal.h"
#include "EVehicleSpecialStatusEvent.generated.h"

UENUM(BlueprintType)
enum class EVehicleSpecialStatusEvent : uint8 {
    Create,
    CountDown,
    Destroy,
    Cancel,
    AttackStart,
    AttackEnd,
    MoveStart,
    MoveEnd,
    Input,
};

