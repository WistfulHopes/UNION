#pragma once
#include "CoreMinimal.h"
#include "EVehicleEngineSoundType.generated.h"

UENUM(BlueprintType)
enum class EVehicleEngineSoundType : uint8 {
    Default,
    Front,
    Rear,
    DefaultLow,
    FrontLow,
    RearLow,
    None,
};

