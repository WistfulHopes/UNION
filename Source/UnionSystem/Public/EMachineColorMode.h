#pragma once
#include "CoreMinimal.h"
#include "EMachineColorMode.generated.h"

UENUM(BlueprintType)
enum class EMachineColorMode : uint8 {
    Default,
    Preset,
    Custom,
};

