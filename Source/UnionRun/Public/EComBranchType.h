#pragma once
#include "CoreMinimal.h"
#include "EComBranchType.generated.h"

UENUM(BlueprintType)
enum class EComBranchType : uint8 {
    NONE,
    BRANCH_FORCE,
    BRANCH_RANDOM,
    BRANCH_CONDITION,
    SHORTCUT_RING,
    Max,
};

