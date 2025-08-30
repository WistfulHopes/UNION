#pragma once
#include "CoreMinimal.h"
#include "ETimeTrialSpeedClassId.generated.h"

UENUM(BlueprintType)
enum class ETimeTrialSpeedClassId : uint8 {
    SonicSpeed,
    SuperSonicSpeed,
    Num,
};

