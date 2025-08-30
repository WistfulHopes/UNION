#pragma once
#include "CoreMinimal.h"
#include "EMariaXboxUserPickMode.generated.h"

UENUM(BlueprintType)
enum class EMariaXboxUserPickMode : uint8 {
    Default,
    DefaultOrPick,
    Pick,
};

