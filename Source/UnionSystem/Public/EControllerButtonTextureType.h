#pragma once
#include "CoreMinimal.h"
#include "EControllerButtonTextureType.generated.h"

UENUM(BlueprintType)
enum class EControllerButtonTextureType : uint8 {
    PS4,
    PS5,
    NX,
    NX_JoyCon,
    XBOX,
    Num,
};

