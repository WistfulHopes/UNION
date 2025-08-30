#pragma once
#include "CoreMinimal.h"
#include "EBreakDamageType.generated.h"

UENUM(BlueprintType)
enum class EBreakDamageType : uint8 {
    None,
    NotInvincible,
    NotItemDash,
    All,
    Num,
};

