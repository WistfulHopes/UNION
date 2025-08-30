#pragma once
#include "CoreMinimal.h"
#include "ESelectedState.generated.h"

UENUM(BlueprintType)
enum class ESelectedState : uint8 {
    NONE,
    ALBUM,
    TRACK,
    Num,
};

