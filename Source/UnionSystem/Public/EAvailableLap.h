#pragma once
#include "CoreMinimal.h"
#include "EAvailableLap.generated.h"

UENUM(BlueprintType)
enum class EAvailableLap : uint8 {
    NONE,
    FIRST_SECOUND_LAP,
    FINAL_LAP,
    ALL,
    Num,
};

