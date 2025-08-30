#pragma once
#include "CoreMinimal.h"
#include "ELobbyErrorType.generated.h"

UENUM(BlueprintType)
enum class ELobbyErrorType : uint8 {
    Success,
    InternalError,
    Timeout,
    EOSError,
    InviteBlocked,
    OtherMemberInRace,
    TooManyPlayers,
    Kicked,
    Blocked,
    NotFound,
    AlreadyInLobby,
    DuplicateExecution,
    RomVersion,
    ConnectionRejected,
};

