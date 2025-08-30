#pragma once
#include "CoreMinimal.h"
#include "ERaceTestPathSelectType.generated.h"

UENUM(BlueprintType)
enum class ERaceTestPathSelectType : uint8 {
    MainPath,
    SubPath,
    Random,
    Num,
};

