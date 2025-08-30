#pragma once
#include "CoreMinimal.h"
#include "ERaceActionTutorialId.generated.h"

UENUM(BlueprintType)
enum class ERaceActionTutorialId : uint8 {
    Drift,
    AirTrick,
    Airplane,
    Boat,
    Num,
};

