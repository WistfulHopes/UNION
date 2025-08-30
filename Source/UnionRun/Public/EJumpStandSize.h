#pragma once
#include "CoreMinimal.h"
#include "EJumpStandSize.generated.h"

UENUM(BlueprintType)
enum class EJumpStandSize : uint8 {
    Mesh2x2,
    Mesh2x3,
    Mesh3x2,
    Mesh3x3,
    Mesh3x4,
    Mesh4x4,
    Num,
};

