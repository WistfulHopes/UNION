#pragma once
#include "CoreMinimal.h"
#include "EFrameRateLimit.generated.h"

UENUM(BlueprintType)
enum class EFrameRateLimit : uint8 {
    Limit30,
    Limit60,
    Num,
};

