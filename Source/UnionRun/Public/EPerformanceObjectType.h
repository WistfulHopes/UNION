#pragma once
#include "CoreMinimal.h"
#include "EPerformanceObjectType.generated.h"

UENUM(BlueprintType)
enum class EPerformanceObjectType : uint8 {
    Unknown,
    Slime,
    Weight,
    DarkChao,
    WarpRingStart,
    WarpRingEnd,
};

