#pragma once
#include "CoreMinimal.h"
#include "EMachineSelectControlState.generated.h"

UENUM(BlueprintType)
enum class EMachineSelectControlState : uint8 {
    CharacterSelect,
    MachineTypeSelect,
    MachinePartsSelect,
    MachineColorSelect,
    Selected,
};

