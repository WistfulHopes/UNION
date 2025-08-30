#pragma once
#include "CoreMinimal.h"
#include "EHintTopCategory.generated.h"

UENUM(BlueprintType)
enum class EHintTopCategory : uint8 {
    EH_Tutorial,
    EH_Tips,
    EH_Item,
    EH_Infomation,
    Num,
};

