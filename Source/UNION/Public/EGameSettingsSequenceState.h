#pragma once
#include "CoreMinimal.h"
#include "EGameSettingsSequenceState.generated.h"

UENUM(BlueprintType)
enum class EGameSettingsSequenceState : uint8 {
    GameSettingsTop,
    GameGeneralSettings,
    GraphicsSettings,
    InputAssignSettings,
    Exit,
};

