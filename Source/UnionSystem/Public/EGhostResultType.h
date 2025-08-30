#pragma once
#include "CoreMinimal.h"
#include "EGhostResultType.generated.h"

UENUM(BlueprintType)
enum class EGhostResultType : uint8 {
    Non,
    Processing,
    Success,
    Failed,
    Cancel,
};

