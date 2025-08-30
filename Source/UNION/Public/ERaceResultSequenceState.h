#pragma once
#include "CoreMinimal.h"
#include "ERaceResultSequenceState.generated.h"

UENUM(BlueprintType)
enum class ERaceResultSequenceState : uint8 {
    Idle,
    RaceStats,
    Reward,
    RateRank,
    Party,
    Ceremony,
    GhostSave,
    Save,
    GhostEnd,
    Exit,
    RivalTeamResult,
};

