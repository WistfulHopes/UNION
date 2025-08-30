#pragma once
#include "CoreMinimal.h"
#include "ELoadingDisplayType.generated.h"

UENUM(BlueprintType)
enum class ELoadingDisplayType : uint8 {
    Race,
    Short,
    Middle,
    Simple,
};

