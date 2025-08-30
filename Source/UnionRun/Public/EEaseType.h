#pragma once
#include "CoreMinimal.h"
#include "EEaseType.generated.h"

UENUM(BlueprintType)
enum class EEaseType : uint8 {
    LinearEaseIn,
    LinearEaseOut,
    LinearEaseInOut,
    QuadraticEaseIn,
    QuadraticEaseOut,
    QuadraticEaseInOut,
    CubicEaseIn,
    CubicEaseOut,
    CubicEaseInOut,
    QuarticEaseIn,
    QuarticEaseOut,
    QuarticEaseInOut,
};

