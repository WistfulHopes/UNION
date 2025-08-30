#pragma once
#include "CoreMinimal.h"
#include "EUnionRaceHUDApproachState.generated.h"

UENUM(BlueprintType)
enum class EUnionRaceHUDApproachState : uint8 {
    Hidden,
    Lv1,
    Lv2,
    Lv3,
    Num,
};

