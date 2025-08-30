#pragma once
#include "CoreMinimal.h"
#include "EVisibilityBasedVatUpdateOption.generated.h"

UENUM(BlueprintType)
enum class EVisibilityBasedVatUpdateOption : uint8 {
    AlwaysUpdate,
    OnlyUpdateWhenRendered,
    NeverUpdate,
};

