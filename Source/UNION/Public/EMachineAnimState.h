#pragma once
#include "CoreMinimal.h"
#include "EMachineAnimState.generated.h"

UENUM(BlueprintType)
enum class EMachineAnimState : uint8 {
    Normal,
    BodyCut,
    Anchor,
};

