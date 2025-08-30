#pragma once
#include "CoreMinimal.h"
#include "EMariaDevelopLogCategory.generated.h"

UENUM(BlueprintType)
enum class EMariaDevelopLogCategory : uint8 {
    Verbose,
    Info,
    Display,
    Warning,
    Error,
    None = 255,
};

