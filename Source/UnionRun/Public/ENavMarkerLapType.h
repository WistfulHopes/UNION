#pragma once
#include "CoreMinimal.h"
#include "ENavMarkerLapType.generated.h"

UENUM(BlueprintType)
enum class ENavMarkerLapType : uint8 {
    Common,
    FirstLap,
    FinalLap,
    Max,
};

