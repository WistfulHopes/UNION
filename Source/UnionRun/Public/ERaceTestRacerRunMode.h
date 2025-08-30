#pragma once
#include "CoreMinimal.h"
#include "ERaceTestRacerRunMode.generated.h"

UENUM(BlueprintType)
enum class ERaceTestRacerRunMode : uint8 {
    DEFAULT,
    FORCE_COM,
    PERFORMANCE_TEST,
    Num,
};

