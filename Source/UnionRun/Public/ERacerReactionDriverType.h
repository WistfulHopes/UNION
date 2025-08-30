#pragma once
#include "CoreMinimal.h"
#include "ERacerReactionDriverType.generated.h"

UENUM(BlueprintType)
enum class ERacerReactionDriverType : uint8 {
    Player,
    Rival,
    PowerRival,
    Other,
    Num,
};

