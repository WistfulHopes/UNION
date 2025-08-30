#pragma once
#include "CoreMinimal.h"
#include "EResourceQuality.generated.h"

UENUM(BlueprintType)
enum class EResourceQuality : uint8 {
    Low,
    High,
    Max = High,
};

