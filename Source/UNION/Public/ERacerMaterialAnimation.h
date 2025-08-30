#pragma once
#include "CoreMinimal.h"
#include "ERacerMaterialAnimation.generated.h"

UENUM(BlueprintType)
enum class ERacerMaterialAnimation : uint8 {
    EnterSlimed,
    ExitSlimed,
    CancelSlimed,
    EnterPaint,
    ExitPaint,
    CancelPaint,
};

