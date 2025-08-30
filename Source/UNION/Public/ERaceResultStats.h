#pragma once
#include "CoreMinimal.h"
#include "ERaceResultStats.generated.h"

UENUM(BlueprintType)
enum class ERaceResultStats : uint8 {
    Idle,
    RaceFinished,
    StartRanking,
    AddRankingPoint,
    StartBonus,
    AddBonusPoint,
    HiddenRankingPanelForTotal,
    StartTotalRankingResult,
    RewardAdditionIdle,
    RewardAdditionIn,
    RewardAdditionWait,
    RewardAdditionOut,
    CompleteRewardIdle,
    CompleteRewardIn,
    CompleteRewardWait,
    CompleteRewardOut,
    Loading,
    ExitIdle,
    Exit,
};

