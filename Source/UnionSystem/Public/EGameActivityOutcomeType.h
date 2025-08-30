#pragma once
#include "CoreMinimal.h"
#include "EGameActivityOutcomeType.generated.h"

UENUM(BlueprintType)
enum class EGameActivityOutcomeType : uint8 {
    Completed,
    Failed,
    Cancelled,
};

