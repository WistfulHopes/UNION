#pragma once
#include "CoreMinimal.h"
#include "EModelQuality.generated.h"

UENUM(BlueprintType)
enum class EModelQuality : uint8 {
    Low,
    High,
    Num,
};

