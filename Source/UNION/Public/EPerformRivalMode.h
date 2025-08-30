#pragma once
#include "CoreMinimal.h"
#include "EPerformRivalMode.generated.h"

UENUM(BlueprintType)
enum class EPerformRivalMode : uint8 {
    PerformFirst,
    PerformFinal,
    PerformFirstSolo,
};

