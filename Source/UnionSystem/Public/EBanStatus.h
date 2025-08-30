#pragma once
#include "CoreMinimal.h"
#include "EBanStatus.generated.h"

UENUM(BlueprintType)
enum class EBanStatus : uint8 {
    None,
    ForeverBan,
    TemporalBan,
    ForeverBanNotification,
    TemporalBanNotification,
    Max,
};

