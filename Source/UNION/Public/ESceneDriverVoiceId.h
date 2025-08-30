#pragma once
#include "CoreMinimal.h"
#include "ESceneDriverVoiceId.generated.h"

UENUM(BlueprintType)
enum class ESceneDriverVoiceId : uint8 {
    RivalFirstRacePlayer,
    RivalFirstRaceRival,
    RivalResultFirstRaceWin,
    RivalResultFirstRaceLose,
    RivalFinalRace,
    RivalResultFinalRaceWin,
    RivalResultFinalRaceLose,
    Num,
};

