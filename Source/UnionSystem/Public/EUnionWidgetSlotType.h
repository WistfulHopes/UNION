#pragma once
#include "CoreMinimal.h"
#include "EUnionWidgetSlotType.generated.h"

UENUM(BlueprintType)
enum class EUnionWidgetSlotType : uint8 {
    None,
    Canvas,
    Overlay,
    WidgetSwitcher,
};

