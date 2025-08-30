#pragma once
#include "CoreMinimal.h"
#include "EWidgetZOrder.generated.h"

UENUM(BlueprintType)
enum class EWidgetZOrder : uint8 {
    Game,
    Fade,
    System,
    Develop,
};

