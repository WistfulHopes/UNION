#pragma once
#include "CoreMinimal.h"
#include "ESpeedClassId.generated.h"

UENUM(BlueprintType)
enum class ESpeedClassId : uint8 {
    NormalSpeed,
    HighSpeed,
    SonicSpeed,
    SuperSonicSpeed,
    Num,
};

