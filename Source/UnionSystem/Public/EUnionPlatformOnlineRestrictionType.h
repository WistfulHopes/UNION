#pragma once
#include "CoreMinimal.h"
#include "EUnionPlatformOnlineRestrictionType.generated.h"

UENUM(BlueprintType)
enum class EUnionPlatformOnlineRestrictionType : uint8 {
    NoRestriction,
    NoOnlineSubscription,
    ParentalControlRestricted,
    Unknown,
    Num,
};

