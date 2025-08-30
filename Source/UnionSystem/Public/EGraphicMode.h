#pragma once
#include "CoreMinimal.h"
#include "EGraphicMode.generated.h"

UENUM(BlueprintType)
enum class EGraphicMode : uint8 {
    Quality,
    Performance,
    Num,
};

