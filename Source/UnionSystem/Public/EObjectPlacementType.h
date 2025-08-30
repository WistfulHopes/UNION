#pragma once
#include "CoreMinimal.h"
#include "EObjectPlacementType.generated.h"

UENUM(BlueprintType)
enum class EObjectPlacementType : uint8 {
    Common,
    Standard,
    Strategy,
    Num,
};

