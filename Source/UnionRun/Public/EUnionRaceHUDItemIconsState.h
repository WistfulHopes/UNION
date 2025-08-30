#pragma once
#include "CoreMinimal.h"
#include "EUnionRaceHUDItemIconsState.generated.h"

UENUM(BlueprintType)
enum class EUnionRaceHUDItemIconsState : uint8 {
    None,
    InAnimating,
    Facing,
    OutAnimating,
    Num,
};

