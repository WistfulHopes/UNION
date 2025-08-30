#pragma once
#include "CoreMinimal.h"
#include "EPartyRaceBeatSubTask.generated.h"

UENUM(BlueprintType)
enum EPartyRaceBeatSubTask {
    PartyRace_Beat_None,
    PartyRace_Alpha01,
    PartyRace_Alpha02,
    PartyRace_Alpha03 = 4,
    PartyRace_Alpha04 = 8,
    PartyRace_Alpha05 = 16,
    PartyRace_Alpha06 = 32,
    PartyRace_Alpha07 = 64,
    PartyRace_Alpha08 = 128,
};

