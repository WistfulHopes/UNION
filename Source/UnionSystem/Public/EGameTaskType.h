#pragma once
#include "CoreMinimal.h"
#include "EGameTaskType.generated.h"

UENUM(BlueprintType)
enum class EGameTaskType : uint8 {
    None,
    WinAll,
    BeatAllRival,
};

