#pragma once
#include "CoreMinimal.h"
#include "ECellIndicatorColor.generated.h"

UENUM(BlueprintType)
enum class ECellIndicatorColor : uint8 {
    Deactive,
    Active,
    Player1,
    Player2,
    Player3,
    Player4,
};

