#pragma once
#include "CoreMinimal.h"
#include "ETimeCountCollisionType.generated.h"

UENUM(BlueprintType)
enum class ETimeCountCollisionType : uint8 {
    Start,
    End,
    Max,
};

