#pragma once
#include "CoreMinimal.h"
#include "EGraphicQualityPreset.generated.h"

UENUM(BlueprintType)
enum class EGraphicQualityPreset : uint8 {
    Low,
    High,
    Custom,
    Num,
};

