#pragma once
#include "CoreMinimal.h"
#include "EMilestoneVersion.generated.h"

UENUM(BlueprintType)
enum class EMilestoneVersion : uint8 {
    None,
    Second,
    Alpha,
    ClosedNetworkTest,
    Beta,
    Show1,
    Show2,
    OpenNetworkTest,
    Demo,
    Show3,
};

