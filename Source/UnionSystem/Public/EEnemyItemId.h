#pragma once
#include "CoreMinimal.h"
#include "EEnemyItemId.generated.h"

UENUM(BlueprintType)
enum class EEnemyItemId : uint8 {
    NonItem,
    T_Rex = 10,
};

