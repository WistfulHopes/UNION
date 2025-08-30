#pragma once
#include "CoreMinimal.h"
#include "EHoldItemCurveVectorAsset.generated.h"

UENUM(BlueprintType)
enum class EHoldItemCurveVectorAsset : uint8 {
    InTranslation,
    InRotation,
    InScale,
    IdleTranslation,
    IdleRotation,
    IdleScale,
    OutTranslation,
    OutRotation,
    OutScale,
    Num,
};

