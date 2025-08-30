#pragma once
#include "CoreMinimal.h"
#include "ERaceSettingSpecialMCEvent.generated.h"

UENUM(BlueprintType)
enum class ERaceSettingSpecialMCEvent : uint8 {
    Disable,
    EnableNormal,
    EnableMany,
};

