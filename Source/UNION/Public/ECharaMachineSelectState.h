#pragma once
#include "CoreMinimal.h"
#include "ECharaMachineSelectState.generated.h"

UENUM(BlueprintType)
enum class ECharaMachineSelectState : uint8 {
    Hidden,
    InAnim,
    CharaSelect,
    MachineSelect,
    OutAnim,
};

