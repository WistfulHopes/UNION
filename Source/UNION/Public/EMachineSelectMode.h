#pragma once
#include "CoreMinimal.h"
#include "EMachineSelectMode.generated.h"

UENUM(BlueprintType)
enum class EMachineSelectMode : uint8 {
    MachineTypeSelect,
    MachinePartsSelect,
    MachineColorSelect,
};

