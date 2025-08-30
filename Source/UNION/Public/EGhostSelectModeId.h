#pragma once
#include "CoreMinimal.h"
#include "EGhostSelectModeId.generated.h"

UENUM(BlueprintType)
enum class EGhostSelectModeId : uint8 {
    NotMyBest,
    MyBestChallenge,
    OnlineGhostChallenge,
    Num,
};

