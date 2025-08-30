#pragma once
#include "CoreMinimal.h"
#include "ETopCountState.generated.h"

UENUM(BlueprintType)
enum class ETopCountState : uint8 {
    Normal,
    MatchPoint,
    Winner,
    Num,
};

