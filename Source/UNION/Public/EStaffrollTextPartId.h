#pragma once
#include "CoreMinimal.h"
#include "EStaffrollTextPartId.generated.h"

UENUM(BlueprintType)
enum class EStaffrollTextPartId : uint8 {
    Invalid,
    Primary1,
    Primary2,
    Secondary,
    SecondaryWith1,
    SecondaryWith2,
    TertiaryOnly,
    Tertiary,
    Logo,
    Space,
    SegaLogo,
    Num,
};

