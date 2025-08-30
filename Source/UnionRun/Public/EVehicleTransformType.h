#pragma once
#include "CoreMinimal.h"
#include "EVehicleTransformType.generated.h"

UENUM(BlueprintType)
enum class EVehicleTransformType : uint8 {
    CarToBoat,
    CarToPlane,
    BoatToCar,
    BoatToPlane,
    PlaneToCar,
    PlaneToBoat,
};

