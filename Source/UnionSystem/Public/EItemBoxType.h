#pragma once
#include "CoreMinimal.h"
#include "EItemBoxType.generated.h"

UENUM(BlueprintType)
enum class EItemBoxType : uint8 {
    Normal,
    Double,
    Special,
    Irregular,
    Triple,
    ReLottery = 8,
    Reserve = 14,
    Num,
};

