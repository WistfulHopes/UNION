#pragma once
#include "CoreMinimal.h"
#include "ERacerReactionWindow.generated.h"

UENUM(BlueprintType)
enum class ERacerReactionWindow : uint8 {
    None,
    Normal,
    Emphasis,
    Rival,
    PowerRival,
    Num,
};

