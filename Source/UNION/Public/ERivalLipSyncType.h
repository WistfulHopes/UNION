#pragma once
#include "CoreMinimal.h"
#include "ERivalLipSyncType.generated.h"

UENUM(BlueprintType)
enum class ERivalLipSyncType : uint8 {
    Rival_FirstRacePlayer,
    Rival_FirstRaceRival,
    Rival_FinalRaceRival_Win,
    Rival_FinalRaceRival_Lose,
    Rival_RaceAll,
};

