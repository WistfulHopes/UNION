#pragma once
#include "CoreMinimal.h"
#include "EMachineSelectState.generated.h"

UENUM(BlueprintType)
enum class EMachineSelectState : uint8 {
    Hidden,
    InAnim,
    Idle,
    OutAnim,
};

