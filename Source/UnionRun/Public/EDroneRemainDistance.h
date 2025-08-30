#pragma once
#include "CoreMinimal.h"
#include "EDroneRemainDistance.generated.h"

UENUM(BlueprintType)
enum class EDroneRemainDistance : uint8 {
    DistanceUnknown,
    Distance1000,
    Distance500,
    Distance300,
    Distance100,
};

