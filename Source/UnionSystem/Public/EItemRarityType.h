#pragma once
#include "CoreMinimal.h"
#include "EItemRarityType.generated.h"

UENUM(BlueprintType)
enum class EItemRarityType : uint8 {
    Normal,
    Rare,
    Num,
};

