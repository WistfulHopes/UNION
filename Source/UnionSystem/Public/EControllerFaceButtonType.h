#pragma once
#include "CoreMinimal.h"
#include "EControllerFaceButtonType.generated.h"

UENUM(BlueprintType)
enum class EControllerFaceButtonType : uint8 {
    FaceUp,
    FaceRight,
    FaceDown,
    FaceLeft,
};

