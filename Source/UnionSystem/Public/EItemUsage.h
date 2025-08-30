#pragma once
#include "CoreMinimal.h"
#include "EItemUsage.generated.h"

UENUM(BlueprintType)
enum class EItemUsage : uint8 {
    None,
    Accel,
    Defense,
    Offense,
    Place,
};

