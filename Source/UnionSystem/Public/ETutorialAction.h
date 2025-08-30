#pragma once
#include "CoreMinimal.h"
#include "ETutorialAction.generated.h"

UENUM(BlueprintType)
enum class ETutorialAction : uint8 {
    None,
    Drift,
    AirTrick,
    FlightAccel,
    FlightDrift,
    BoatCharge,
};

