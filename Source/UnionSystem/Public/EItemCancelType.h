#pragma once
#include "CoreMinimal.h"
#include "EItemCancelType.generated.h"

UENUM(BlueprintType)
enum class EItemCancelType : uint8 {
    Unknown,
    ForcedTermination,
    FootCut,
    Depleted,
    Goaled,
    Upgrade,
    TradeItem,
    Lost,
    ReLottery,
};

