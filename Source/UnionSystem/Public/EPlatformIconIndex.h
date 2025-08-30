#pragma once
#include "CoreMinimal.h"
#include "EPlatformIconIndex.generated.h"

UENUM(BlueprintType)
enum class EPlatformIconIndex : uint8 {
    Xbox,
    Switch,
    PlayStation,
    Steam_PC,
    CS,
    Com = CS,
    CopyRacer = CS,
    None = CS,
};

