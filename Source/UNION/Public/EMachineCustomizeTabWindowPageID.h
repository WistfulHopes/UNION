#pragma once
#include "CoreMinimal.h"
#include "EMachineCustomizeTabWindowPageID.generated.h"

UENUM(BlueprintType)
enum class EMachineCustomizeTabWindowPageID : uint8 {
    MachineCustomizePartsSelect,
    ColorSelectPreset,
    ColorSelectArea,
    ColorSelectDetail,
    SlotSelectPage,
    StickerSlotSelect,
    StickerSelect,
    StickerApply,
    HornSelect,
    AuraSelect,
};

