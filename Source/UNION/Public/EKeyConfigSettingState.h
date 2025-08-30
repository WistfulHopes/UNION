#pragma once
#include "CoreMinimal.h"
#include "EKeyConfigSettingState.generated.h"

UENUM(BlueprintType)
enum class EKeyConfigSettingState : uint8 {
    Select,
    KeySetting,
    Disable,
};

