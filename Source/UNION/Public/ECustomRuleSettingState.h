#pragma once
#include "CoreMinimal.h"
#include "ECustomRuleSettingState.generated.h"

UENUM(BlueprintType)
enum class ECustomRuleSettingState : uint8 {
    UnReady,
    Ready,
    Unknown,
};

