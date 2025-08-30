#pragma once
#include "CoreMinimal.h"
#include "EItemReleaseType.generated.h"

UENUM(BlueprintType)
enum class EItemReleaseType : uint8 {
    Unknown,
    DLC_Paid,
    DLC_Free,
    DLC_DeluxeBonus,
    DLC_SeasonPassBonus,
    DLC_EarlyBookingBonus,
    DLC_CNTBonus,
    ServerTime,
    Num,
};

