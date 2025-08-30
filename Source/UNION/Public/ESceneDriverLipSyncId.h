#pragma once
#include "CoreMinimal.h"
#include "ESceneDriverLipSyncId.generated.h"

UENUM(BlueprintType)
enum class ESceneDriverLipSyncId : uint8 {
    Rival_FirstRacePlayer,
    Rival_FirstRaceRival,
    Rival_FinalRace,
    Num,
};

