#pragma once
#include "CoreMinimal.h"
#include "EMachineCockpitMaterialArea.generated.h"

UENUM(BlueprintType)
enum class EMachineCockpitMaterialArea : uint8 {
    Cockpit,
    CockpitVisible,
    CockpitBoatFrontUnit,
    CockpitBoatRearUnit,
    CockpitFlightFrontUnit,
    CockpitFlightRearUnit,
    Num,
};

