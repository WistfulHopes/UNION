#pragma once
#include "CoreMinimal.h"
#include "EItemThrowDirection.generated.h"

UENUM(BlueprintType)
enum class EItemThrowDirection : uint8 {
    Front,
    Back,
    Myself,
};

