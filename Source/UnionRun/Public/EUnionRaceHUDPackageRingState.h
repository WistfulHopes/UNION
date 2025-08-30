#pragma once
#include "CoreMinimal.h"
#include "EUnionRaceHUDPackageRingState.generated.h"

UENUM(BlueprintType)
enum class EUnionRaceHUDPackageRingState : uint8 {
    None,
    NoticeTake,
    ApplyReserve,
    Num,
};

