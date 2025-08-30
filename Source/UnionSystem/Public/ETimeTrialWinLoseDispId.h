#pragma once
#include "CoreMinimal.h"
#include "ETimeTrialWinLoseDispId.generated.h"

UENUM(BlueprintType)
enum class ETimeTrialWinLoseDispId : uint8 {
    NewBestRecord,
    NiceTry,
    GhostWin,
    GhostLose,
    Max,
};

