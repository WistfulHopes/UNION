#pragma once
#include "CoreMinimal.h"
#include "ETopMenuPlayNum.generated.h"

UENUM(BlueprintType)
enum class ETopMenuPlayNum : uint8 {
    None,
    Local1P,
    Local2P,
    Local3P,
    Local4P,
    OnlineSolo,
    OnlineMulti,
    Max,
};

