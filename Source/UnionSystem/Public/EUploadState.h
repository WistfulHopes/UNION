#pragma once
#include "CoreMinimal.h"
#include "EUploadState.generated.h"

UENUM(BlueprintType)
enum class EUploadState : uint8 {
    None,
    Ghost,
    Result,
};

