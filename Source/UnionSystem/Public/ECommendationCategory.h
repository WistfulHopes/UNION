#pragma once
#include "CoreMinimal.h"
#include "ECommendationCategory.generated.h"

UENUM(BlueprintType)
enum class ECommendationCategory : uint8 {
    Unknown,
    OneStar,
    TwoStars,
    ThreeStars,
    Num,
};

