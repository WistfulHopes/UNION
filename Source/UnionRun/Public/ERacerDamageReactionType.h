#pragma once
#include "CoreMinimal.h"
#include "ERacerDamageReactionType.generated.h"

UENUM(BlueprintType)
enum class ERacerDamageReactionType : uint8 {
    Non,
    Large,
    Medium,
    Small,
    Num,
};

