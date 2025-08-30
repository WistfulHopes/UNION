#pragma once
#include "CoreMinimal.h"
#include "ENewsCategory.generated.h"

UENUM(BlueprintType)
enum class ENewsCategory : uint8 {
    EventEndReward,
    EmergencyInfoNotice,
    FestaAnnounce,
    LegendCompe,
    ExtndNotice,
    FreeCollaboContent,
    BonusInfo,
    Num,
};

