#pragma once
#include "CoreMinimal.h"
#include "EDriverDirection.generated.h"

UENUM(BlueprintType)
enum class EDriverDirection : uint8 {
    Front,
    Back,
    Left,
    Right,
    Num,
};

