#pragma once
#include "CoreMinimal.h"
#include "EMenuSpeedClassId.generated.h"

UENUM(BlueprintType)
enum class EMenuSpeedClassId : uint8 {
    NormalSpeed,
    HighSpeed,
    SonicSpeed,
    SuperSonicSpeed,
    Mirror,
    Num,
};

