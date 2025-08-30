#pragma once
#include "CoreMinimal.h"
#include "ERaceFrameRate.generated.h"

UENUM(BlueprintType)
enum class ERaceFrameRate : uint8 {
    None,
    Fps25,
    Fps30,
    Fps50,
    Fps60,
    Num,
};

