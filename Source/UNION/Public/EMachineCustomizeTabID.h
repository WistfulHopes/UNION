#pragma once
#include "CoreMinimal.h"
#include "EMachineCustomizeTabID.generated.h"

UENUM(BlueprintType)
enum class EMachineCustomizeTabID : uint8 {
    PartsSelect,
    ColorSelectPreset,
    StickerSlotSelect,
    HornSelect,
    AuraSelect,
    Num,
};

