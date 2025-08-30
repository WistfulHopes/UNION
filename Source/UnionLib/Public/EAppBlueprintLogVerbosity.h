#pragma once
#include "CoreMinimal.h"
#include "EAppBlueprintLogVerbosity.generated.h"

UENUM(BlueprintType)
enum class EAppBlueprintLogVerbosity : uint8 {
    Error,
    Warning,
    Display,
    Log,
    Verbose,
    VeryVerbose,
    WarningDialog,
    DisplayDialog,
};

