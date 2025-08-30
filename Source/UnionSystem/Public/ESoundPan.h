#pragma once
#include "CoreMinimal.h"
#include "ESoundPan.generated.h"

UENUM(BlueprintType)
enum class ESoundPan : uint8 {
    Left,
    Right,
    Center,
    Unset,
};

