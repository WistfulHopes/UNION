#pragma once
#include "CoreMinimal.h"
#include "ELobbyInvitationNoticeAttentionType.generated.h"

UENUM(BlueprintType)
enum class ELobbyInvitationNoticeAttentionType : uint8 {
    None,
    InGame,
    JoinedLobby,
    Num,
};

