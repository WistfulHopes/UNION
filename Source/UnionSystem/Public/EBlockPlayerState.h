#pragma once
#include "CoreMinimal.h"
#include "EBlockPlayerState.generated.h"

UENUM(BlueprintType)
enum class EBlockPlayerState : uint8 {
    None,
    Terra,
    Platform,
    FullyBlocked,
};

