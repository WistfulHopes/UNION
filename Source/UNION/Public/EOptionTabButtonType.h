#pragma once
#include "CoreMinimal.h"
#include "EOptionTabButtonType.generated.h"

UENUM(BlueprintType)
enum class EOptionTabButtonType : uint8 {
    Race,
    Control,
    Language,
    Graphics,
    Audio,
    Arrow,
    Online,
};

