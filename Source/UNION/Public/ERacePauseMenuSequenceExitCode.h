#pragma once
#include "CoreMinimal.h"
#include "ERacePauseMenuSequenceExitCode.generated.h"

UENUM(BlueprintType)
enum class ERacePauseMenuSequenceExitCode : uint8 {
    Continue,
    Restart,
    TopMenu,
};

