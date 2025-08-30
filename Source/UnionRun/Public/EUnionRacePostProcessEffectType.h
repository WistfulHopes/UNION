#pragma once
#include "CoreMinimal.h"
#include "EUnionRacePostProcessEffectType.generated.h"

UENUM(BlueprintType)
enum class EUnionRacePostProcessEffectType : uint8 {
    None,
    WaterFall,
    Paint,
    SplashOfWater,
    Flame,
    Max,
};

