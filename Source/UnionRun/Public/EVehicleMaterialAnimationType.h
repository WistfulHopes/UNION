#pragma once
#include "CoreMinimal.h"
#include "EVehicleMaterialAnimationType.generated.h"

UENUM(BlueprintType)
enum class EVehicleMaterialAnimationType : uint8 {
    FreshlyPaintAppear,
    FreshlyPaintDisappear,
    FreshlyPaintReset,
};

