#pragma once
#include "CoreMinimal.h"
#include "ERaceInfoEventType.generated.h"

UENUM(BlueprintType)
enum class ERaceInfoEventType : uint8 {
    Race_ChangeState,
    Race_CountDown,
    Race_Finish,
    Num,
};

