#pragma once
#include "CoreMinimal.h"
#include "EHintTabID.generated.h"

UENUM(BlueprintType)
enum class EHintTabID : uint8 {
    HitTubTutorial,
    HintTubTips,
    HintTabItem,
    HintTabInformation,
    Num,
};

