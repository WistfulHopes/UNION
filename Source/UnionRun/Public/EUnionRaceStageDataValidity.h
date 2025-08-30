#pragma once
#include "CoreMinimal.h"
#include "EUnionRaceStageDataValidity.generated.h"

UENUM(BlueprintType)
enum class EUnionRaceStageDataValidity : uint8 {
    Invalid,
    Completeness,
    BasicLapOnly,
    FinalLapOnly,
};

