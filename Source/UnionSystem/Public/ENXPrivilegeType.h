#pragma once
#include "CoreMinimal.h"
#include "ENXPrivilegeType.generated.h"

UENUM(BlueprintType)
enum class ENXPrivilegeType : uint8 {
    Unavailable,
    Available,
    ErrorOccurred,
    Num,
};

