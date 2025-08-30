#pragma once
#include "CoreMinimal.h"
#include "ESplineMoveType.generated.h"

UENUM(BlueprintType)
enum class ESplineMoveType : uint8 {
    Loop,
    Return,
    NoLoop,
    Max,
};

