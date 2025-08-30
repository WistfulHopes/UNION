#pragma once
#include "CoreMinimal.h"
#include "ESharedMotionOverwriteFaceType.generated.h"

UENUM(BlueprintType)
enum class ESharedMotionOverwriteFaceType : uint8 {
    None,
    Normal,
    Damage,
    Num,
};

