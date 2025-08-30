#pragma once
#include "CoreMinimal.h"
#include "EGadgetState.generated.h"

UENUM(BlueprintType)
enum class EGadgetState : uint8 {
    Attachable,
    Unpurchased,
    Locked,
};

