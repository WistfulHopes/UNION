#pragma once
#include "CoreMinimal.h"
#include "EAppSupportedPlatform.generated.h"

UENUM(BlueprintType)
enum class EAppSupportedPlatform : uint8 {
    PC,
    Steam,
    PS4,
    PS5,
    XBX,
    XBO,
    Switch,
    None,
};

