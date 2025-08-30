#pragma once
#include "CoreMinimal.h"
#include "EStaffrollTextWidgetId.generated.h"

UENUM(BlueprintType)
enum class EStaffrollTextWidgetId : uint8 {
    Invalid,
    PrimaryItem,
    SecondaryItem,
    TertiaryItemWithSecondary,
    TertiaryItem,
    Logo,
    Num,
};

