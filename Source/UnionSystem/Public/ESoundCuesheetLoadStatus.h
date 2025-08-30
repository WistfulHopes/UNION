#pragma once
#include "CoreMinimal.h"
#include "ESoundCuesheetLoadStatus.generated.h"

UENUM(BlueprintType)
enum class ESoundCuesheetLoadStatus : uint8 {
    Unload,
    Loading,
    Loaded,
    Num,
};

