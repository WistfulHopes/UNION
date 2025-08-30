#pragma once
#include "CoreMinimal.h"
#include "ERaceTestSelectTravelType.generated.h"

UENUM(BlueprintType)
enum class ERaceTestSelectTravelType : uint8 {
    DEFAULT,
    SELECT_LEFT,
    SELECT_RIGHT,
    SELECT_CONFLICT,
    Num,
};

