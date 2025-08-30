#pragma once
#include "CoreMinimal.h"
#include "ETurntableDataId.generated.h"

UENUM(BlueprintType)
enum class ETurntableDataId : uint8 {
    Init,
    StickerFrontView,
    StickerRearView,
    FrontStickerEditView,
    RearStickerEditView,
};

