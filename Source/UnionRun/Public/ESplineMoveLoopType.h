#pragma once
#include "CoreMinimal.h"
#include "ESplineMoveLoopType.generated.h"

UENUM(BlueprintType)
enum class ESplineMoveLoopType : uint8 {
    NoLoop,
    Loop,
    Return,
    ForceActor,
};

