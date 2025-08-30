#pragma once
#include "CoreMinimal.h"
#include "EGadgetCustomizeSequenceState.generated.h"

UENUM(BlueprintType)
enum class EGadgetCustomizeSequenceState : uint8 {
    Init,
    PartsSelect,
    SlotSelect,
    AttachMethodSelect,
    GadgetSelect,
    ChangeConfirm,
    AttachComplete,
    ChangeResult,
};

