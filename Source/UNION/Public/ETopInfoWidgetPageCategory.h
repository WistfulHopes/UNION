#pragma once
#include "CoreMinimal.h"
#include "ETopInfoWidgetPageCategory.generated.h"

UENUM(BlueprintType)
enum class ETopInfoWidgetPageCategory : uint8 {
    FestaInfo,
    EmarjencyInfo,
    CollaboInfo,
    DLCInfo,
    LegendInfo,
    BounsInfo,
    WorldMatch,
    Num,
    None,
};

