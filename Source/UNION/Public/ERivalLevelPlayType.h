#pragma once
#include "CoreMinimal.h"
#include "ERivalLevelPlayType.generated.h"

UENUM(BlueprintType)
enum class ERivalLevelPlayType : uint8 {
    None,
    Blank,
    Normal,
    High,
    SuperHigh,
    BlankLoop,
};

