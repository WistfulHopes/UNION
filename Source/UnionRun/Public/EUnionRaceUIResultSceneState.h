#pragma once
#include "CoreMinimal.h"
#include "EUnionRaceUIResultSceneState.generated.h"

UENUM(BlueprintType)
enum class EUnionRaceUIResultSceneState : uint8 {
    Invalid,
    Ranking,
    PartyRaceMissionIn,
    PartyRaceMissionIdle,
    DonpaTicket,
    Finished,
};

