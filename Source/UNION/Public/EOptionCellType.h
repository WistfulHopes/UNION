#pragma once
#include "CoreMinimal.h"
#include "EOptionCellType.generated.h"

UENUM(BlueprintType)
enum class EOptionCellType : uint8 {
    Indicator,
    Button,
    Gauge,
    SubCategory,
};

