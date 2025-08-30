#pragma once
#include "CoreMinimal.h"
#include "ERaceInfoStateType.generated.h"

UENUM(BlueprintType)
enum class ERaceInfoStateType : uint8 {
    Idle,
    Countdown,
    OnRace,
    Finish,
    Exit,
    Num,
};

