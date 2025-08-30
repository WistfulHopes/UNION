#pragma once
#include "CoreMinimal.h"
#include "EConnectionResult.generated.h"

UENUM(BlueprintType)
enum class EConnectionResult : uint8 {
    Wait,
    Complete,
    Error,
};

