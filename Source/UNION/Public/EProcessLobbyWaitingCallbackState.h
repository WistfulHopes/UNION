#pragma once
#include "CoreMinimal.h"
#include "EProcessLobbyWaitingCallbackState.generated.h"

UENUM(BlueprintType)
enum class EProcessLobbyWaitingCallbackState : uint8 {
    NotWaiting,
    WaitingForCallback,
    CallbackSuccess,
    CallbackFail,
};

