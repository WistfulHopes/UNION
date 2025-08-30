#pragma once
#include "CoreMinimal.h"
#include "EFriendType.generated.h"

UENUM(BlueprintType)
enum class EFriendType : uint8 {
    None,
    PlatformFriend,
    AppFriend,
};

