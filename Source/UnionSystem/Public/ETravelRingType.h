#pragma once
#include "CoreMinimal.h"
#include "ETravelRingType.generated.h"

UENUM(BlueprintType)
enum class ETravelRingType : uint8 {
    Invalid,
    Left,
    Right,
    Enter,
    Exit,
    NotEffect_Entrance,
    NotEffect_Exit,
    Shortcut_Entrance,
    Shortcut_Exit,
};

