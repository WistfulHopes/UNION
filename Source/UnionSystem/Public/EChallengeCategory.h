#pragma once
#include "CoreMinimal.h"
#include "EChallengeCategory.generated.h"

UENUM(BlueprintType)
enum class EChallengeCategory : uint8 {
    ECM_Race,
    ECM_Grandprix,
    ECM_PartyRace,
    ECM_TimeTrial,
    ECM_MachineCustom,
    ECM_Gadget,
    ECM_Special,
    Num,
};

