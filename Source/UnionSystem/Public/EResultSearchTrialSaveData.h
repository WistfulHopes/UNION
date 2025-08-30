#pragma once
#include "CoreMinimal.h"
#include "EResultSearchTrialSaveData.generated.h"

UENUM(BlueprintType)
enum class EResultSearchTrialSaveData : uint8 {
    Non,
    Found,
    NotFound,
    FoundError,
    Error,
};

