#pragma once
#include "CoreMinimal.h"
#include "EShortcutRingType.generated.h"

UENUM(BlueprintType)
enum class EShortcutRingType : uint8 {
    Entrance,
    Exit,
    Max,
};

