#pragma once
#include "CoreMinimal.h"
#include "EGUNHunterStartType.generated.h"

UENUM(BlueprintType)
enum class EGUNHunterStartType : uint8 {
    None,
    Ground,
    Sky,
    Walk,
    Hover,
    LookAround,
};

