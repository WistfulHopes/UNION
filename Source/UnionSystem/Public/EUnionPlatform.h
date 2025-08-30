#pragma once
#include "CoreMinimal.h"
#include "EUnionPlatform.generated.h"

UENUM(BlueprintType)
enum class EUnionPlatform : uint8 {
    Windows,
    PS4,
    PS5,
    XB1,
    XSX,
    Switch,
};

