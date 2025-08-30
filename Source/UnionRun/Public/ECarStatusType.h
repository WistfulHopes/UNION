#pragma once
#include "CoreMinimal.h"
#include "ECarStatusType.generated.h"

UENUM(BlueprintType)
enum class ECarStatusType : uint8 {
    CarStatusSpeed,
    CarStatusAccele,
    CarStatusHandle,
    CarStatusPower,
    CarStatusDash,
};

