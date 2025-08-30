#pragma once
#include "CoreMinimal.h"
#include "EForceFeedbackLevel.generated.h"

UENUM(BlueprintType)
enum class EForceFeedbackLevel : uint8 {
    Off,
    Weak,
    Normal,
    Strong,
    Num,
};

