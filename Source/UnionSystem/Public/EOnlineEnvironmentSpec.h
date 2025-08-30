#pragma once
#include "CoreMinimal.h"
#include "EOnlineEnvironmentSpec.generated.h"

UENUM(BlueprintType)
enum class EOnlineEnvironmentSpec : uint8 {
    Development,
    Test,
    Stage,
    Production,
};

