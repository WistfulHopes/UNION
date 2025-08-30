#pragma once
#include "CoreMinimal.h"
#include "EChallengeAchivement.generated.h"

UENUM(BlueprintType)
enum class EChallengeAchivement : uint8 {
    ECA_None,
    ECA_Bronze,
    ECA_Silver,
    ECA_Gold,
    ECA_Platinum,
};

