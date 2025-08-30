#pragma once
#include "CoreMinimal.h"
#include "ESimpleMoveLoopType.generated.h"

UENUM(BlueprintType)
enum class ESimpleMoveLoopType : uint8 {
    Return,
    ReversalReturn,
    Loop,
};

