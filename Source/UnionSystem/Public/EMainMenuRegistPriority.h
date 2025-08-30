#pragma once
#include "CoreMinimal.h"
#include "EMainMenuRegistPriority.generated.h"

UENUM(BlueprintType)
enum class EMainMenuRegistPriority : uint8 {
    AppUI,
    PopupWindow,
    ErrorPopupWindow,
};

