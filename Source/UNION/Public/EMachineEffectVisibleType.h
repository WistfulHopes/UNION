#pragma once
#include "CoreMinimal.h"
#include "EMachineEffectVisibleType.generated.h"

UENUM(BlueprintType)
enum class EMachineEffectVisibleType : uint8 {
    LocalPlayerOnly,
    SelfOnly,
    Always,
};

