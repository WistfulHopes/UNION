#pragma once
#include "CoreMinimal.h"
#include "EResultTransferTrialSaveData.generated.h"

UENUM(BlueprintType)
enum class EResultTransferTrialSaveData : uint8 {
    Non,
    Success,
    Failed,
};

