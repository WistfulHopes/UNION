#pragma once
#include "CoreMinimal.h"
#include "EOptionTabButtonState.generated.h"

UENUM(BlueprintType)
enum class EOptionTabButtonState : uint8 {
    Active,
    Select,
    NonActive,
};

