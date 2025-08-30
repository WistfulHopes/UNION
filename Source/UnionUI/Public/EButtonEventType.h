#pragma once
#include "CoreMinimal.h"
#include "EButtonEventType.generated.h"

UENUM(BlueprintType)
enum class EButtonEventType : uint8 {
    OnFocus,
    OnRemoveFocus,
    OnDecision,
    OnCancel,
};

