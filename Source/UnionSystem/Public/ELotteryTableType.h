#pragma once
#include "CoreMinimal.h"
#include "ELotteryTableType.generated.h"

UENUM(BlueprintType)
enum class ELotteryTableType : uint8 {
    Unknown,
    GrandPrix,
    Group,
    Dangerous,
    Other,
};

