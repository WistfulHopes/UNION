#pragma once
#include "CoreMinimal.h"
#include "EPadStyle.generated.h"

UENUM(BlueprintType)
enum class EPadStyle : uint8 {
    None,
    Pro,
    DualJoyCon,
    SingleJoyCon,
    Handheld,
    Num,
};

