#pragma once
#include "CoreMinimal.h"
#include "EGUNHunterMotion.generated.h"

UENUM(BlueprintType)
enum class EGUNHunterMotion : uint8 {
    WaitSky,
    WaitGround,
    MoveHover,
    MoveWalk,
};

