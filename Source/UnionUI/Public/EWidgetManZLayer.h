#pragma once
#include "CoreMinimal.h"
#include "EWidgetManZLayer.generated.h"

UENUM(BlueprintType)
enum class EWidgetManZLayer : uint8 {
    Default,
    Overlay,
    TopMost,
    Background,
};

