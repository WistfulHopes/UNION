#pragma once
#include "CoreMinimal.h"
#include "EStickerState.generated.h"

UENUM(BlueprintType)
enum class EStickerState : uint8 {
    Selectable,
    Unpurchased,
    Locked,
};

