#pragma once
#include "CoreMinimal.h"
#include "EDomainNumber.generated.h"

UENUM(BlueprintType)
enum class EDomainNumber : uint8 {
    DomainNumber0,
    DomainNumber1,
    DomainNumber2,
    DomainNumber3,
    DomainNumberMax,
    InvalidDomainNumber = 255,
};

