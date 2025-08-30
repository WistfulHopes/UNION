#pragma once
#include "CoreMinimal.h"
#include "DialogueDisplayAnimationAssetID.generated.h"

UENUM(BlueprintType)
enum class DialogueDisplayAnimationAssetID : uint8 {
    OutIdle,
    In,
    Idle,
    Out,
    OutLoop,
    Num,
};

