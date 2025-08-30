#pragma once
#include "CoreMinimal.h"
#include "EMenuDriverAnimationStateId.generated.h"

UENUM(BlueprintType)
enum class EMenuDriverAnimationStateId : uint8 {
    Idle,
    Emote,
    Horn,
    SendLike,
    CharaSelect,
    JumpLanding,
    Num,
};

