#pragma once
#include "CoreMinimal.h"
#include "EFontSizeType.generated.h"

UENUM(BlueprintType)
enum class EFontSizeType : uint8 {
    DIN,
    MORISAWA,
    Other,
    Num,
};

