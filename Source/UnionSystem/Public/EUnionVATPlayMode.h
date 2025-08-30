#pragma once
#include "CoreMinimal.h"
#include "EUnionVATPlayMode.generated.h"

UENUM(BlueprintType)
enum class EUnionVATPlayMode : uint8 {
    MaterialDriven,
    TickDriven,
    FrameDriven,
    OuterDriven,
};

