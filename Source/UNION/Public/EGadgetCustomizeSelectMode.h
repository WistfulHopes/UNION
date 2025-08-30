#pragma once
#include "CoreMinimal.h"
#include "EGadgetCustomizeSelectMode.generated.h"

UENUM(BlueprintType)
enum class EGadgetCustomizeSelectMode : uint8 {
    Preset,
    PresetAndGadget,
};

