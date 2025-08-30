#pragma once
#include "CoreMinimal.h"
#include "DialogueAnimationAssetID.generated.h"

UENUM(BlueprintType)
enum class DialogueAnimationAssetID : uint8 {
    OutIdle,
    Idle,
    TalkStart,
    TalkLoop,
    PriseLoop,
    Go,
    Bye,
    Num,
};

