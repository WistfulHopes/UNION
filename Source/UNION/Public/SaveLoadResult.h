#pragma once
#include "CoreMinimal.h"
#include "SaveLoadResult.generated.h"

UENUM(BlueprintType)
enum class SaveLoadResult : uint8 {
    Success,
    Failure,
};

