#pragma once
#include "CoreMinimal.h"
#include "EItemCategoryType.generated.h"

UENUM(BlueprintType)
enum class EItemCategoryType : uint8 {
    Non,
    Myself,
    Target,
    Groud,
    Num,
};

