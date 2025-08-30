#pragma once
#include "CoreMinimal.h"
#include "EPreloadAssetType.generated.h"

UENUM(BlueprintType)
enum class EPreloadAssetType : uint8 {
    Vehicle,
    MachineEffect,
    Item,
    HUD,
    Num,
};

