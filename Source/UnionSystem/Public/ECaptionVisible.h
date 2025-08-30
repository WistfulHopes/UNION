#pragma once
#include "CoreMinimal.h"
#include "ECaptionVisible.generated.h"

UENUM(BlueprintType)
enum class ECaptionVisible : uint8 {
    Visible,
    SerifOnly,
    Invisible,
    Num,
};

