#pragma once
#include "CoreMinimal.h"
#include "EMenuInputKey.generated.h"

UENUM(BlueprintType)
enum class EMenuInputKey : uint8 {
    UpKey,
    DownKey,
    LeftKey,
    RightKey,
    AcceptKey,
    BackKey,
    FaceButtonLeft,
    FaceButtonTop,
    LeftShoulder,
    RightShoulder,
    LeftStickButton,
    RightStickButton,
    Special,
};

