#pragma once
#include "CoreMinimal.h"
#include "EAppLogLevel.generated.h"

UENUM(BlueprintType)
enum class EAppLogLevel : uint8 {
    Log,
    Verbose,
    VeryVerbose,
    Warning,
    Error,
};

