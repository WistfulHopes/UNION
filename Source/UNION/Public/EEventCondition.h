#pragma once
#include "CoreMinimal.h"
#include "EEventCondition.generated.h"

UENUM(BlueprintType)
enum class EEventCondition : uint8 {
    FirstInGrandPrix,
    ReleaseFever,
    FirstInGadgetCustom,
    FirstInRacePark,
    FirstInFesta,
    ClearRacePark,
    ClearGrandPrix,
    FirstInLegendCompe,
    Num,
    Invalid = Num,
};

