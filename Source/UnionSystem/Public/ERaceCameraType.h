#pragma once
#include "CoreMinimal.h"
#include "ERaceCameraType.generated.h"

UENUM(BlueprintType)
enum class ERaceCameraType : uint8 {
    Original,
    Dynamic,
    Num,
};

