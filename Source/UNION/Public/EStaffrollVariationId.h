#pragma once
#include "CoreMinimal.h"
#include "EStaffrollVariationId.generated.h"

UENUM(BlueprintType)
enum class EStaffrollVariationId : uint8 {
    Invalid,
    Standard,
    Memory,
};

