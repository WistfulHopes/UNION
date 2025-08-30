#pragma once
#include "CoreMinimal.h"
#include "EUnionLoadingGaugeState.generated.h"

UENUM(BlueprintType)
enum class EUnionLoadingGaugeState : uint8 {
    None,
    Start_Ring1,
    Ring1_Ring2,
    Ring2_Ring3,
    Ring3_Goal,
    Goal,
    Num,
};

