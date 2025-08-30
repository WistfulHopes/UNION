#pragma once
#include "CoreMinimal.h"
#include "EErrorLevel.generated.h"

UENUM(BlueprintType)
enum class EErrorLevel : uint8 {
    NonError,
    Warning,
    ForcedEnd,
    SignedOut,
    Num,
};

