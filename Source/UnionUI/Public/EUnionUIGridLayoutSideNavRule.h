#pragma once
#include "CoreMinimal.h"
#include "EUnionUIGridLayoutSideNavRule.generated.h"

UENUM(BlueprintType)
enum class EUnionUIGridLayoutSideNavRule : uint8 {
    Explicit,
    Wrap,
    Stop,
    Custom,
};

