#pragma once
#include "CoreMinimal.h"
#include "EMaterialQuality.generated.h"

UENUM(BlueprintType)
enum class EMaterialQuality : uint8 {
    Low,
    Medium = 2,
    High = 1,
    Epic = 3,
};

