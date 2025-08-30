#pragma once
#include "CoreMinimal.h"
#include "EUnionCameraPriority.generated.h"

UENUM(BlueprintType)
enum class EUnionCameraPriority : uint8 {
    Default,
    ItemCamera = 10,
    PublicityCamera = 20,
};

