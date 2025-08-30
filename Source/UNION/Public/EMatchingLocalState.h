#pragma once
#include "CoreMinimal.h"
#include "EMatchingLocalState.generated.h"

UENUM(BlueprintType)
enum class EMatchingLocalState : uint8 {
    JoinOrCreateLobby,
    WaitMatching,
    WaitUpdateLobbySettings,
    WaitAsyncP2PConnectionComplete,
    HostAsyncP2PComplete,
    NotificationClientAsyncP2PEnd,
    WaitHostConnection,
    WaitHostConnectionSequential,
    WaitClientConnectionConcurrent,
    RequestClientP2P,
    WaitClientConnection,
    StartClientP2P,
    StartClientP2PSequential,
    WaitClientP2P,
    WaitClientP2PSequential,
    CompleteClientP2PSequential,
    WaitAllConnection,
    StartOnlineRace,
    PreRace,
    PreRaceFinished,
    EndPreRace,
    Exit,
    Error,
    ResendError,
    ClientP2PStartError,
};

