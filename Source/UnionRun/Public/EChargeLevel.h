#pragma once
#include "CoreMinimal.h"
#include "EChargeLevel.generated.h"

UENUM(BlueprintType)
enum class EChargeLevel : uint8 {
    ChargeLv1,
    ChargeLv2,
    ChargeLv3,
    ChargeLv4,
    Max,
};

