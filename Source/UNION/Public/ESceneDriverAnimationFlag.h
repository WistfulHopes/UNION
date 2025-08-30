#pragma once
#include "CoreMinimal.h"
#include "ESceneDriverAnimationFlag.generated.h"

UENUM(BlueprintType)
enum class ESceneDriverAnimationFlag : uint8 {
    RivalAction,
    RivalActionTaunt,
    RivalActionAnnoyed,
    RivalActionConfidence,
    RivalActionUnique,
    Num,
};

