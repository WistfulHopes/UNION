#pragma once
#include "CoreMinimal.h"
#include "ERaceSequenceExitCode.generated.h"

UENUM(BlueprintType)
enum class ERaceSequenceExitCode : uint8 {
    TopMenu,
    Restart,
    Replay,
    Error,
};

