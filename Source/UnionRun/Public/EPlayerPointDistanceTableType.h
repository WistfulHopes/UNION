#pragma once
#include "CoreMinimal.h"
#include "EPlayerPointDistanceTableType.generated.h"

UENUM(BlueprintType)
enum class EPlayerPointDistanceTableType : uint8 {
    PlayerTableTypeGrandPrix,
    PlayerTableTypeGroup,
    PlayerTableTypeOther,
    PlayerTableTypeDangerous,
    Num,
};

