#pragma once
#include "CoreMinimal.h"
#include "EOptionControlCell.generated.h"

UENUM(BlueprintType)
enum class EOptionControlCell : uint8 {
    SubCategory_UI_Custom,
    InverseAccept,
    ButtonDisplayType,
    SubCategory_Race_Custom,
    PlayerNumber,
    AssistHandle,
    AssistAccelerator,
    AssistAirTrick,
    GyroAssist,
    ForceFeedback,
    ForceFeedback_4STEP,
    KeyOperationType_PC,
    KeyOperationType_CS,
    CustomKeyConfig,
    FlyModeReverse,
    StickSense,
};

