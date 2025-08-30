#pragma once
#include "CoreMinimal.h"
#include "ECameraTremorType.generated.h"

UENUM(BlueprintType)
enum class ECameraTremorType : uint8 {
    Low,
    Middle,
    High,
    Moai,
    Num,
};

