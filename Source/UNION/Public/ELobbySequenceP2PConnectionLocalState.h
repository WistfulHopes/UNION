#pragma once
#include "CoreMinimal.h"
#include "ELobbySequenceP2PConnectionLocalState.generated.h"

UENUM(BlueprintType)
enum class ELobbySequenceP2PConnectionLocalState : uint8 {
    Idle,
    WaitMatching,
    WaitUpdateLobbySettings,
    Exit,
    Error,
};

