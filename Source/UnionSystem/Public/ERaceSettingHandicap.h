#pragma once
#include "CoreMinimal.h"
#include "ERaceSettingHandicap.generated.h"

UENUM(BlueprintType)
enum class ERaceSettingHandicap : uint8 {
    NothingHandicap,
    Auto,
    Manual,
};

