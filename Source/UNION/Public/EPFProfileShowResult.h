#pragma once
#include "CoreMinimal.h"
#include "EPFProfileShowResult.generated.h"

UENUM(BlueprintType)
enum class EPFProfileShowResult : uint8 {
    None,
    Success,
    ErrorWindow,
    Failed,
    Num,
};

