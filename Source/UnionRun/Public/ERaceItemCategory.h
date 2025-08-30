#pragma once
#include "CoreMinimal.h"
#include "ERaceItemCategory.generated.h"

UENUM(BlueprintType)
enum class ERaceItemCategory : uint8 {
    None,
    Accele,
    Offense,
    Defense,
    Place,
    Num,
};

