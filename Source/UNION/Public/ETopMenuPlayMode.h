#pragma once
#include "CoreMinimal.h"
#include "ETopMenuPlayMode.generated.h"

UENUM(BlueprintType)
enum class ETopMenuPlayMode : uint8 {
    None,
    Offline,
    Online,
    Wireless,
    Max,
};

