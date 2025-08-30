#pragma once
#include "CoreMinimal.h"
#include "ERacerDriftState.generated.h"

UENUM(BlueprintType)
enum class ERacerDriftState : uint8 {
    None,
    Right,
    Left,
    Num,
};

