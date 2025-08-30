#pragma once
#include "CoreMinimal.h"
#include "EHoldItemSTMSequence.generated.h"

UENUM(BlueprintType)
enum class EHoldItemSTMSequence : uint8 {
    Invalid,
    In,
    Idle,
    Out,
    Num,
};

