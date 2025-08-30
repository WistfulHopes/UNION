#pragma once
#include "CoreMinimal.h"
#include "ESoftwareKeyboardFloatingType.generated.h"

UENUM(BlueprintType)
enum class ESoftwareKeyboardFloatingType : uint8 {
    SingleLine,
    MultipleLines,
    ModeEmail,
    ModeNumeric,
    Num,
};

