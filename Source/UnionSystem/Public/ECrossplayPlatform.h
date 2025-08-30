#pragma once
#include "CoreMinimal.h"
#include "ECrossplayPlatform.generated.h"

UENUM(BlueprintType)
enum class ECrossplayPlatform : uint8 {
    Xbox,
    Switch,
    PlayStation,
    Steam_PC,
    Console,
    Com,
    CopyRacer,
    None,
};

