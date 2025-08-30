#pragma once
#include "CoreMinimal.h"
#include "EComPathLapType.generated.h"

UENUM(BlueprintType)
enum class EComPathLapType : uint8 {
    LAP_NOMAL,
    LAP_FINAL,
    LAP_RESULT,
    Max,
};

