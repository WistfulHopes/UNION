#pragma once
#include "CoreMinimal.h"
#include "ETutorialControllerOperation.generated.h"

UENUM(BlueprintType)
enum class ETutorialControllerOperation : uint8 {
    None,
    Hold,
    Release,
};

