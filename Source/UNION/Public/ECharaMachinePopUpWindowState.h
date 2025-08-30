#pragma once
#include "CoreMinimal.h"
#include "ECharaMachinePopUpWindowState.generated.h"

UENUM(BlueprintType)
enum class ECharaMachinePopUpWindowState : uint8 {
    None,
    OptionWindow,
    ParameterWindow,
};

