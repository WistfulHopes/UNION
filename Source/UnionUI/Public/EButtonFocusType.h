#pragma once
#include "CoreMinimal.h"
#include "EButtonFocusType.generated.h"

UENUM(BlueprintType)
enum class EButtonFocusType : uint8 {
    CanFocus,
    CanFocusButNotOperated,
    CanNotFocus,
};

