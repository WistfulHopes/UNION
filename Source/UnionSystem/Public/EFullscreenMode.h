#pragma once
#include "CoreMinimal.h"
#include "EFullscreenMode.generated.h"

UENUM(BlueprintType)
enum class EFullscreenMode : uint8 {
    Fullscreen,
    Borderless,
    Window,
    Num,
};

