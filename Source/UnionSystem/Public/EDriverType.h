#pragma once
#include "CoreMinimal.h"
#include "EDriverType.generated.h"

UENUM(BlueprintType)
enum class EDriverType : uint8 {
    Speed,
    Accele,
    Handle,
    Power,
    Dash,
    Num,
};

