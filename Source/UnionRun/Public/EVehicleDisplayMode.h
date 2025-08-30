#pragma once
#include "CoreMinimal.h"
#include "EVehicleDisplayMode.generated.h"

UENUM(BlueprintType)
enum class EVehicleDisplayMode : uint8 {
    Nomal,
    YellowDrill,
    MonsterTruck,
    CyanLaser,
    WarpRing,
    Mini,
    Invisible,
    InvisibleAndReset,
};

