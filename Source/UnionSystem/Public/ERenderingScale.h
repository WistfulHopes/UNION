#pragma once
#include "CoreMinimal.h"
#include "ERenderingScale.generated.h"

UENUM(BlueprintType)
enum class ERenderingScale : uint8 {
    Lowest,
    Low,
    Native,
    High,
    Highest,
    Num,
};

