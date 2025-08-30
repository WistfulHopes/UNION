#pragma once
#include "CoreMinimal.h"
#include "EContentUnlockType.generated.h"

UENUM(BlueprintType)
enum class EContentUnlockType : uint8 {
    Non,
    DLC,
    ServerTime,
    ServerRewards,
};

