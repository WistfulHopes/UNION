#pragma once
#include "CoreMinimal.h"
#include "ETransformRingType.generated.h"

UENUM(BlueprintType)
enum class ETransformRingType : uint8 {
    Car,
    Plane,
    Boat,
    Max,
};

