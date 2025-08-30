#pragma once
#include "CoreMinimal.h"
#include "EAdvertiseState.generated.h"

UENUM(BlueprintType)
enum class EAdvertiseState : uint8 {
    CESAWarning,
    VariousWarning,
    SEGALogo,
    SONICLogo,
    RightsLogo,
    RightsLogo2,
    CompanyName,
    Rating,
    Strap,
    End,
};

