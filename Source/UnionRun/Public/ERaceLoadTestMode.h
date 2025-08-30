#pragma once
#include "CoreMinimal.h"
#include "ERaceLoadTestMode.generated.h"

UENUM(BlueprintType)
enum class ERaceLoadTestMode : uint8 {
    None,
    Steady,
    Peak,
    Num,
};

