#pragma once
#include "CoreMinimal.h"
#include "EPrivateMatchPlayType.generated.h"

UENUM(BlueprintType)
enum class EPrivateMatchPlayType : uint8 {
    None,
    RivalChallenge,
    FreePlay,
};

