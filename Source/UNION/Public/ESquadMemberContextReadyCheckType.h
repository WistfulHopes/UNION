#pragma once
#include "CoreMinimal.h"
#include "ESquadMemberContextReadyCheckType.generated.h"

UENUM(BlueprintType)
enum class ESquadMemberContextReadyCheckType : uint8 {
    NotReady,
    Ready,
    TrueReady,
};

