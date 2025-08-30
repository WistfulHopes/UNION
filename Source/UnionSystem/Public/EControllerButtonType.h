#pragma once
#include "CoreMinimal.h"
#include "EControllerButtonType.generated.h"

UENUM(BlueprintType)
enum class EControllerButtonType : uint8 {
    GamePadFaceButton,
    GamePadOthers,
    KeyBoardShort,
    KeyBoardLong,
    KeyBoardArrow,
    Mouse,
};

