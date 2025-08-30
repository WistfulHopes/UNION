#pragma once
#include "CoreMinimal.h"
#include "EFriendListPopupWindowText.generated.h"

UENUM(BlueprintType)
enum class EFriendListPopupWindowText : uint8 {
    WaitTitle,
    WaitMessage,
    InvitationWarningTitle,
    InvitationWarningMessage,
    OfflineAnnounceTitle,
    OfflineAnnounceMessage,
    CheckGotoOnlineTitle,
    CheckGotoOnlineMessage,
    CheckGotoOnlineButtonYesText,
    CheckGotoOnlineButtonNoText,
    Num,
};

