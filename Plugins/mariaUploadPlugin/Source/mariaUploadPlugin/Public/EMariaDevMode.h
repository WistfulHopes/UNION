#pragma once
#include "CoreMinimal.h"
#include "EMariaDevMode.generated.h"

UENUM(BlueprintType)
enum class EMariaDevMode : uint8 {
    Retail,
    Staging,
    Develop,
    Internal,
};

