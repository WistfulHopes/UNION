#pragma once
#include "CoreMinimal.h"
#include "EAnimationVoiceLipSyncId.generated.h"

UENUM(BlueprintType)
enum class EAnimationVoiceLipSyncId : uint8 {
    Rival_FirstRacePlayer,
    Rival_FirstRaceRival,
    Rival_FinalRace,
    Num,
};

