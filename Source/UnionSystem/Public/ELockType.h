#pragma once
#include "CoreMinimal.h"
#include "ELockType.generated.h"

UENUM(BlueprintType)
enum class ELockType : uint8 {
    None,
    Price,
    Norm,
};

