#pragma once
#include "CoreMinimal.h"
#include "EUhionRunAffectType.generated.h"

UENUM(BlueprintType)
enum class EUhionRunAffectType : uint8 {
    BodyMatrixBase,
    AffectAll,
    TyrePosBase,
};

