#pragma once
#include "CoreMinimal.h"
#include "ERacerDamagePropertyChangeType.generated.h"

UENUM(BlueprintType)
enum class ERacerDamagePropertyChangeType : uint8 {
    SpeedlValue,
    Ratio,
    Num,
};

