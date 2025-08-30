#pragma once
#include "CoreMinimal.h"
#include "EKeyConfigRace.generated.h"

UENUM(BlueprintType)
enum class EKeyConfigRace : uint8 {
    SteerL,
    SteerR,
    PitchU,
    PitchD,
    TrickL,
    TrickR,
    TrickU,
    TrickD,
    Accel,
    Brake,
    RearView,
    UseItem,
    Drift,
    Gadget,
};

