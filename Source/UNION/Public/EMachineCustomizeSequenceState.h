#pragma once
#include "CoreMinimal.h"
#include "EMachineCustomizeSequenceState.generated.h"

UENUM(BlueprintType)
enum class EMachineCustomizeSequenceState : uint8 {
    Init,
    Save,
    MachineSelect,
    PartsSelect,
    ColorPresetSelect,
    ColorAreaSelect,
    ColorDetail,
    StickerSlotSelect,
    StickerSelect,
    StickerApply,
    HornSelect,
    AuraSelect,
};

