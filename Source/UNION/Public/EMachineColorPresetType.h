#pragma once
#include "CoreMinimal.h"
#include "EMachineColorPresetType.generated.h"

UENUM(BlueprintType)
enum class EMachineColorPresetType : uint8 {
    Character,
    Machine,
    DLCCharacter,
    GroupRacePreset,
};

