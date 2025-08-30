#pragma once
#include "CoreMinimal.h"
#include "EPreRaceSequenceState.generated.h"

UENUM(BlueprintType)
enum class EPreRaceSequenceState : uint8 {
    Idle,
    CheckLobbyMember,
    COMDataSync,
    Measurement,
    HostMigration,
    Exit,
    WaitP2PConnection,
    ErrorWindow,
    NetworkCleanup,
};

