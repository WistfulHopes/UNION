#pragma once
#include "CoreMinimal.h"
#include "EOptionLocalPlayerNumber.generated.h"

UENUM(BlueprintType)
enum class EOptionLocalPlayerNumber : uint8 {
    Player_1,
    Player_2,
    Player_3,
    Player_4,
    Num,
};

