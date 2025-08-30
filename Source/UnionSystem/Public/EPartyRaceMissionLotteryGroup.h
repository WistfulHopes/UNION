#pragma once
#include "CoreMinimal.h"
#include "EPartyRaceMissionLotteryGroup.generated.h"

UENUM(BlueprintType)
enum class EPartyRaceMissionLotteryGroup : uint8 {
    Individual,
    Group,
    None = 255,
};

