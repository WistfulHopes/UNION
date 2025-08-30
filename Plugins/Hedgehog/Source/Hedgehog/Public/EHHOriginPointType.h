#pragma once
#include "CoreMinimal.h"
#include "EHHOriginPointType.generated.h"

UENUM(BlueprintType)
enum class EHHOriginPointType : uint8 {
    UseDefault,
    UseFirstPointPos,
    UseSpecifiedPos,
};

