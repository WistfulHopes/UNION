#pragma once
#include "CoreMinimal.h"
#include "EGrandPrixRivalResult.generated.h"

UENUM(BlueprintType)
enum class EGrandPrixRivalResult : uint8 {
    Invalid,
    Win,
    Lose,
};

