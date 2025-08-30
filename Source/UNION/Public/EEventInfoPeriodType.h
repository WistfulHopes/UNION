#pragma once
#include "CoreMinimal.h"
#include "EEventInfoPeriodType.generated.h"

UENUM(BlueprintType)
enum class EEventInfoPeriodType : uint8 {
    FestaPreNotice,
    FestaOpen,
    FestaRankingCalc,
    FestaFinalResult,
    LegendCompeOpen,
    LegendCompeRankingCalc,
    LegendCompeFinalResult,
    Num,
    None,
};

