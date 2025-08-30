#pragma once
#include "CoreMinimal.h"
#include "EUnionUIButtonLoopAnim.generated.h"

UENUM(BlueprintType)
enum class EUnionUIButtonLoopAnim : uint8 {
    ActiveLoop,
    SelectLoop,
    DisableLoop,
    LockActiveLoop,
    LockSelectLoop,
};

