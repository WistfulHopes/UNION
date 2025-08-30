#pragma once
#include "CoreMinimal.h"
#include "ERaceSettingComSpeed.generated.h"

UENUM(BlueprintType)
enum class ERaceSettingComSpeed : uint8 {
    NothingCom,
    Weak,
    Normal,
    Strong,
};

