#pragma once
#include "CoreMinimal.h"
#include "EAntiAliasMethod.generated.h"

UENUM(BlueprintType)
enum class EAntiAliasMethod : uint8 {
    None,
    FXAA,
    TAA,
    TSR,
    Num,
};

