#pragma once
#include "CoreMinimal.h"
#include "EKeyConfigMenu.generated.h"

UENUM(BlueprintType)
enum class EKeyConfigMenu : uint8 {
    AcceptKeyInverse,
    ButtonAppearance,
    SelectPlayer,
    AssistHandle,
    AssistAccel,
    AssistTrick,
    GyroTrick,
    ForceFeedback,
    OperationType,
    KeyConfig,
};

