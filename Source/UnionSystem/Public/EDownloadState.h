#pragma once
#include "CoreMinimal.h"
#include "EDownloadState.generated.h"

UENUM(BlueprintType)
enum class EDownloadState : uint8 {
    None,
    Ranking,
    Ghost,
};

