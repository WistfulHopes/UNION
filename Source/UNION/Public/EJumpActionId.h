#pragma once
#include "CoreMinimal.h"
#include "EJumpActionId.generated.h"

UENUM(BlueprintType)
enum class EJumpActionId : uint8 {
    Bounce,
    Landing,
    Num,
};

