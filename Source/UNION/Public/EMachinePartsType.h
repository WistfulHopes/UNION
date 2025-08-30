#pragma once
#include "CoreMinimal.h"
#include "EMachinePartsType.generated.h"

UENUM(BlueprintType)
enum class EMachinePartsType : uint8 {
    Front,
    Rear,
    Tire,
};

