#pragma once
#include "CoreMinimal.h"
#include "ECameraMachineFormType.generated.h"

UENUM(BlueprintType)
enum class ECameraMachineFormType : uint8 {
    Car,
    Boat,
    Plane,
    YellowDrill,
    MonsterTruck,
    HoverBoard,
    CyanLaser,
    WarpRing,
    NUM,
};

