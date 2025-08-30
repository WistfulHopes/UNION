#pragma once
#include "CoreMinimal.h"
#include "ERaceLoadTestPlatform.generated.h"

UENUM(BlueprintType)
enum class ERaceLoadTestPlatform : uint8 {
    Default,
    Switch,
    PS4,
    PS5,
    XBO,
    XBS,
    Windows,
    NUM,
};

