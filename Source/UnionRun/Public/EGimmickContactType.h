#pragma once
#include "CoreMinimal.h"
#include "EGimmickContactType.generated.h"

UENUM(BlueprintType)
enum class EGimmickContactType : uint8 {
    None,
    UnBreakable,
    UnBreakableAndSendDamage,
    Break,
    BreakAndSendDamage,
    InvincibleBreak,
    MachineOnlyHit,
    MachineOnlyHitAndSendDamage,
    InvincibleBreakAndSendDamage,
    Num,
};

