#pragma once
#include "CoreMinimal.h"
#include "EGrandPrixEventFlag.generated.h"

UENUM(BlueprintType)
enum class EGrandPrixEventFlag : uint8 {
    GRANDPRIX_OPENING,
    IRREGULAR_INTRO,
    GADGET_COSTOM_GUIDE,
    RACE_PARK_EXPLANATION,
    FESTA_OPENING,
    RACE_PARK_CLEAR,
    GRANDPRIX_ENDING,
    LEGEND_COMPE_OPENING,
    Num,
    INVALID,
};

