#pragma once
#include "CoreMinimal.h"
#include "EPopupWindowType.generated.h"

UENUM(BlueprintType)
enum class EPopupWindowType : uint8 {
    Basic,
    Error,
    Simple,
    UseDonpaTicket,
    TextScroll,
    LobbyInvitation,
};

