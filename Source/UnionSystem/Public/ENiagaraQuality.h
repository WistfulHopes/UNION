#pragma once
#include "CoreMinimal.h"
#include "ENiagaraQuality.generated.h"

UENUM(BlueprintType)
enum class ENiagaraQuality : uint8 {
    Low,
    Medium,
    High,
    Epic,
    Cinematic,
};

