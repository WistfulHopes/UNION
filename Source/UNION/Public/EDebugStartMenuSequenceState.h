#pragma once
#include "CoreMinimal.h"
#include "EDebugStartMenuSequenceState.generated.h"

UENUM(BlueprintType)
enum class EDebugStartMenuSequenceState : uint8 {
    Idle,
    ConfigDataLoad,
    SaveDataLoad,
    Setting,
    Exit,
};

