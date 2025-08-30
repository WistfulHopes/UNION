#pragma once
#include "CoreMinimal.h"
#include "ECharaMachineParamWindowBlinkMode.generated.h"

UENUM(BlueprintType)
enum class ECharaMachineParamWindowBlinkMode : uint8 {
    None,
    Chara,
    Machine,
    Gadget,
};

