#pragma once
#include "CoreMinimal.h"
#include "EOptionValidPlatform.generated.h"

UENUM(BlueprintType)
enum class EOptionValidPlatform : uint8 {
    All,
    OnlyPC,
    OnlyCS,
    OnlyFF4STEP,
    OnlyFF2STEP,
    OnlyHighendCS,
    OnlyGyroEnable,
    ExceptXbox,
    Num,
};

