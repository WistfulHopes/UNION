#pragma once
#include "CoreMinimal.h"
#include "EDriverBlendSpaceAssetId.generated.h"

UENUM(BlueprintType)
enum class EDriverBlendSpaceAssetId : uint8 {
    SteerIdle,
    SteerIdleDrift,
    Shunt,
    BoatSteerIdleDrift,
    HoverSteerIdle,
    HoverSteerIdleDrift,
    HoverDriftRight,
    HoverDriftLeft,
    HoverShunt,
    Num,
};

