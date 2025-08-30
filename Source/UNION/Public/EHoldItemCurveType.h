#pragma once
#include "CoreMinimal.h"
#include "EHoldItemCurveType.generated.h"

UENUM(BlueprintType)
enum class EHoldItemCurveType : uint8 {
    Translation,
    Rotation,
    Scale,
    Num,
};

