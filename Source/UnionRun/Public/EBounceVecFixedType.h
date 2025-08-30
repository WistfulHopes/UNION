#pragma once
#include "CoreMinimal.h"
#include "EBounceVecFixedType.generated.h"

UENUM(BlueprintType)
enum class EBounceVecFixedType : uint8 {
    None,
    Valid,
    BoostValid,
    Max,
};

