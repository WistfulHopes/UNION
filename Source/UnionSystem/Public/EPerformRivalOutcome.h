#pragma once
#include "CoreMinimal.h"
#include "EPerformRivalOutcome.generated.h"

UENUM(BlueprintType)
enum class EPerformRivalOutcome : uint8 {
    RivalLose,
    RivalWin,
    RivalDraw,
    Num,
};

