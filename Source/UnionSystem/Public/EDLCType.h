#pragma once
#include "CoreMinimal.h"
#include "EDLCType.generated.h"

UENUM(BlueprintType)
enum class EDLCType : uint8 {
    None,
    Free,
    Price,
    Bonus,
    Num,
};

