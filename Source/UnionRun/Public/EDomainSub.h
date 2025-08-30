#pragma once
#include "CoreMinimal.h"
#include "EDomainSub.generated.h"

UENUM(BlueprintType)
enum class EDomainSub : uint8 {
    DomainSub0,
    DomainSub1,
    DomainSub2,
    DomainSub3,
    DomainSubMax,
    InvalidDomainSub = 255,
};

