#pragma once
#include "CoreMinimal.h"
#include "ERacePauseMenuItem.generated.h"

UENUM(BlueprintType)
enum class ERacePauseMenuItem : uint8 {
    Continue,
    Restart,
    HandleAssist,
    AcceleratorAssist,
    AerialTrickAssist,
    KeyAssignment,
    MapVisibleAssist,
    RaceHintAssist,
    ControllerGyroAssist,
    AutoItemAssist,
    GadgetInfo,
    End,
};

