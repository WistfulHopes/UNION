#pragma once
#include "CoreMinimal.h"
#include "ELapDataType.generated.h"

UENUM(BlueprintType)
enum class ELapDataType : uint8 {
    Normal,
    Final,
    TimeAttack,
    Num,
};

