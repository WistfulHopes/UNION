#pragma once
#include "CoreMinimal.h"
#include "DialogueDisplayAnimationStateID.generated.h"

UENUM(BlueprintType)
enum class DialogueDisplayAnimationStateID : uint8 {
    OutIdle,
    In,
    Out,
    Num,
};

