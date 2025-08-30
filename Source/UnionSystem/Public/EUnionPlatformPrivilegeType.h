#pragma once
#include "CoreMinimal.h"
#include "EUnionPlatformPrivilegeType.generated.h"

UENUM(BlueprintType)
enum class EUnionPlatformPrivilegeType : uint8 {
    Unknown,
    CanOnlinePlay,
    CommunicateOnline,
    UserGeneratedContent,
    CrossPlay,
    Num,
};

