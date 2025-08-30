#pragma once
#include "CoreMinimal.h"
#include "EHoldItemVisibility.generated.h"

UENUM(BlueprintType)
enum class EHoldItemVisibility : uint8 {
    Visible,
    Hidden,
    ForceHidden,
    Num,
};

