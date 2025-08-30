#pragma once
#include "CoreMinimal.h"
#include "ERaceEndMenuSequenceExitCode.generated.h"

UENUM(BlueprintType)
enum class ERaceEndMenuSequenceExitCode : uint8 {
    Restart,
    TopMenu,
    Replay,
    Ceremony,
    RivalResult,
    Garage,
    GadgetPlate,
};

