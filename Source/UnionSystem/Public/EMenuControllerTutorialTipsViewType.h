#pragma once
#include "CoreMinimal.h"
#include "EMenuControllerTutorialTipsViewType.generated.h"

UENUM(BlueprintType)
enum class EMenuControllerTutorialTipsViewType : uint8 {
    PS4,
    PS5,
    SwitchPro,
    SwitchDualJoyCon,
    SwitchJoyConSingle,
    SwitchHandheld,
    Windows,
    XBOne,
    XBX,
};

