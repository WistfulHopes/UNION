#pragma once
#include "CoreMinimal.h"
#include "EUnionSplineType.generated.h"

UENUM(BlueprintType)
enum class EUnionSplineType : uint8 {
    None,
    Center,
    Left,
    Right,
    Max,
};

