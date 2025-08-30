#pragma once
#include "CoreMinimal.h"
#include "EEventInfomationType.generated.h"

UENUM(BlueprintType)
enum class EEventInfomationType : uint8 {
    Festa,
    LegendCompe,
    WorldMatch,
    Num,
    None,
};

