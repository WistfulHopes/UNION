#pragma once
#include "CoreMinimal.h"
#include "EUnionRunEffectType.generated.h"

UENUM(BlueprintType)
enum class EUnionRunEffectType : uint8 {
    Hide,
    Idle,
    Run,
    DriftLeft,
    DriftRight,
    Back,
};

