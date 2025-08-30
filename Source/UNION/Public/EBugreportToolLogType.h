#pragma once
#include "CoreMinimal.h"
#include "EBugreportToolLogType.generated.h"

UENUM(BlueprintType)
enum class EBugreportToolLogType : uint8 {
    Log,
    Warning,
    Error,
};

