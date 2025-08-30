#pragma once
#include "CoreMinimal.h"
#include "EOptionTab.generated.h"

UENUM(BlueprintType)
enum class EOptionTab : uint8 {
    Race,
    Control,
    Language,
    Graphics,
    Audio,
    Online,
    Num,
};

