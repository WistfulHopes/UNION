#pragma once
#include "CoreMinimal.h"
#include "EGroupRaceItemLotteryCorrectionType.generated.h"

UENUM(BlueprintType)
enum class EGroupRaceItemLotteryCorrectionType : uint8 {
    None,
    RingRelatedItems,
    RocketPunch,
    BlackBomb,
    BoomBoo,
};

