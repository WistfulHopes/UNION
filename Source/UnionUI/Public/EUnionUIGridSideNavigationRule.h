#pragma once
#include "CoreMinimal.h"
#include "EUnionUIGridSideNavigationRule.generated.h"

UENUM(BlueprintType)
enum class EUnionUIGridSideNavigationRule : uint8 {
    Explicit,
    Wrap,
    Stop,
    Custom,
};

