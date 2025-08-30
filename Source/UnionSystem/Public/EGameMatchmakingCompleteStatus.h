#pragma once
#include "CoreMinimal.h"
#include "EGameMatchmakingCompleteStatus.generated.h"

UENUM(BlueprintType)
enum class EGameMatchmakingCompleteStatus : uint8 {
    Success,
    Failed,
    Canceled,
};

