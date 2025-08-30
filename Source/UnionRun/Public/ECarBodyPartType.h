#pragma once
#include "CoreMinimal.h"
#include "ECarBodyPartType.generated.h"

UENUM(BlueprintType)
enum class ECarBodyPartType : uint8 {
    CarBodyCockPit,
    CarBodyFront,
    CarBodyRear,
    CarBodyMiddle,
    CarBodyCockPitAdd,
    CarBodyTyreWheelL,
    CarBodyTyreWheelR,
};

