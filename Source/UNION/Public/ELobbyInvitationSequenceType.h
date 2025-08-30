#pragma once
#include "CoreMinimal.h"
#include "ELobbyInvitationSequenceType.generated.h"

UENUM(BlueprintType)
enum class ELobbyInvitationSequenceType : uint8 {
    Normal,
    NotAvailableSequence,
    PlatformNotAvailable,
    StreamingInstallNotAvailable,
    OnlineSequenceotAvailable,
};

