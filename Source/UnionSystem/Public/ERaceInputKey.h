#pragma once
#include "CoreMinimal.h"
#include "ERaceInputKey.generated.h"

UENUM(BlueprintType)
enum class ERaceInputKey : uint8 {
    Steer,
    Accel,
    Brake,
    Pitch,
    TrickX,
    TrickY,
    TrickX2,
    TrickY2,
    SlimeCancelX,
    SlimeCancelY,
    Drift,
    UseItem,
    TradeItem,
    RearView,
    Emote,
    Horn,
    Pause,
};

