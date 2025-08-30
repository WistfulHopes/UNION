#pragma once
#include "CoreMinimal.h"
#include "EFriendListCategory.generated.h"

UENUM(BlueprintType)
enum class EFriendListCategory : uint8 {
    PFFriendList,
    FriendList,
    AddFriend,
    InvitationList,
    OnlineSetting,
    Num,
    BlockList,
    None = 255,
};

