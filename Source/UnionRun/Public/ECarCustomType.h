#pragma once
#include "CoreMinimal.h"
#include "ECarCustomType.generated.h"

UENUM(BlueprintType)
enum class ECarCustomType : uint8 {
    CarCustomNone,
    CarCustomMiddlePart,
    CarCustomCockPitDoor,
    CarCustomCockPitNonDoor,
    CarCustomCockPitAdd,
    CarCustomDash,
};

