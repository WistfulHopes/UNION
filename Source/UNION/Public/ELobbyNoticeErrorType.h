#pragma once
#include "CoreMinimal.h"
#include "ELobbyNoticeErrorType.generated.h"

UENUM(BlueprintType)
enum class ELobbyNoticeErrorType : uint8 {
    None,
    SameLobby,
    SearchFail,
    ReturnToTitle,
};

