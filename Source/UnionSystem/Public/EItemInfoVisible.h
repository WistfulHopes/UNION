#pragma once
#include "CoreMinimal.h"
#include "EItemInfoVisible.generated.h"

UENUM(BlueprintType)
enum class EItemInfoVisible : uint8 {
    Visible,
    WarningOnly,
    Invisible,
    Num,
};

