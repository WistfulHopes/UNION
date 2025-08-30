#pragma once
#include "CoreMinimal.h"
#include "EDomainIndex.generated.h"

UENUM(BlueprintType)
enum class EDomainIndex : uint8 {
    DomainIndex0,
    DomainIndex1,
    DomainIndex2,
    DomainIndex3,
    DomainIndexMax,
    InvalidDomainIndex = 255,
};

