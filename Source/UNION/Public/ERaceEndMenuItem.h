#pragma once
#include "CoreMinimal.h"
#include "ERaceEndMenuItem.generated.h"

UENUM(BlueprintType)
enum class ERaceEndMenuItem : uint8 {
    Retry,
    End,
    Replay,
    Ceremony,
    Garage,
};

