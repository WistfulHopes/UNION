#pragma once
#include "CoreMinimal.h"
#include "ERacerControlType.generated.h"

UENUM(BlueprintType)
enum class ERacerControlType : uint8 {
    None,
    LocalPlayer,
    Com,
    OnlinePlayer,
    OnlineCom,
    Ghost,
    Num,
};

