#pragma once
#include "CoreMinimal.h"
#include "EAimType.generated.h"

UENUM(BlueprintType)
enum class EAimType : uint8 {
    Idle,
    BeforeShot,
    AfterShot,
    ManualIdle,
    ManualLockOn,
    Num,
};

