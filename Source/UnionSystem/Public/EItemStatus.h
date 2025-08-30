#pragma once
#include "CoreMinimal.h"
#include "EItemStatus.generated.h"

UENUM(BlueprintType)
enum class EItemStatus : uint8 {
    NonItem,
    Lottery,
    EndRequest,
    Available,
    Activating,
    Upgrade,
    ChargingGauge,
};

