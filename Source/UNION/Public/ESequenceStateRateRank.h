#pragma once
#include "CoreMinimal.h"
#include "ESequenceStateRateRank.generated.h"

UENUM(BlueprintType)
enum class ESequenceStateRateRank : uint8 {
    None,
    Open,
    WaitBonusDisp,
    WaitGaugeUp,
    WaitRankUp,
    WaitRankBonusGet,
    Close,
    Num,
};

