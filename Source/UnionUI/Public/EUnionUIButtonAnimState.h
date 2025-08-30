#pragma once
#include "CoreMinimal.h"
#include "EUnionUIButtonAnimState.generated.h"

UENUM(BlueprintType)
enum class EUnionUIButtonAnimState : uint8 {
    None,
    Loop,
    FocusAnim,
    UnFocusAnim,
    Decide,
    Cansel,
};

