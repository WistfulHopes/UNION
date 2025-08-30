#pragma once
#include "CoreMinimal.h"
#include "EComMarkerType.generated.h"

UENUM(BlueprintType)
enum class EComMarkerType : uint8 {
    NONE,
    USE_DASH_ITEM,
    BOAT_JUMP,
    Max,
};

