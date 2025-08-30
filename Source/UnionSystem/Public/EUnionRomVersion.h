#pragma once
#include "CoreMinimal.h"
#include "EUnionRomVersion.generated.h"

UENUM(BlueprintType)
enum class EUnionRomVersion : uint8 {
    Unspecified,
    Beta,
    Launch,
    Patch1,
};

