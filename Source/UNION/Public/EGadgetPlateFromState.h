#pragma once
#include "CoreMinimal.h"
#include "EGadgetPlateFromState.generated.h"

UENUM(BlueprintType)
enum class EGadgetPlateFromState : uint8 {
    NONE,
    Result,
    Pause,
    EndMenu,
};

