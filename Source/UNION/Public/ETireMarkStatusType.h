#pragma once
#include "CoreMinimal.h"
#include "ETireMarkStatusType.generated.h"

UENUM(BlueprintType)
enum class ETireMarkStatusType : uint8 {
    None,
    Normal,
    Slime,
    GimmickPaint,
    Num,
};

