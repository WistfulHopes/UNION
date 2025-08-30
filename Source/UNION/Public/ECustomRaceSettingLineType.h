#pragma once
#include "CoreMinimal.h"
#include "ECustomRaceSettingLineType.generated.h"

UENUM(BlueprintType)
enum class ECustomRaceSettingLineType : uint8 {
    OnlyOne,
    ToggleEach,
};

