#pragma once
#include "CoreMinimal.h"
#include "EDroneDismissType.generated.h"

UENUM(BlueprintType)
enum class EDroneDismissType : uint8 {
    AllType,
    RemainDistance,
    CurrentLap,
    CautionWrongWay,
};

