#pragma once
#include "CoreMinimal.h"
#include "EUnionUIButtonSoundSetting.generated.h"

UENUM(BlueprintType)
enum class EUnionUIButtonSoundSetting : uint8 {
    Disable,
    Enable,
    DisableAtOnce,
};

