#pragma once
#include "CoreMinimal.h"
#include "EItemUseType.generated.h"

UENUM(BlueprintType)
enum class EItemUseType : uint8 {
    Once,
    MultipleTimes,
    Timer,
    MeasuringTimer,
    Num,
};

