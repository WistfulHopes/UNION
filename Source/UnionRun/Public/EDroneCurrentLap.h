#pragma once
#include "CoreMinimal.h"
#include "EDroneCurrentLap.generated.h"

UENUM(BlueprintType)
enum class EDroneCurrentLap : uint8 {
    Lap3,
    Lap2,
    Lap1,
    LapUnknown,
};

