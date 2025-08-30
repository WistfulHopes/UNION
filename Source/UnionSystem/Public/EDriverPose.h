#pragma once
#include "CoreMinimal.h"
#include "EDriverPose.generated.h"

UENUM(BlueprintType)
enum class EDriverPose : uint8 {
    Car,
    Boat,
    Hoverboard,
    Num,
};

