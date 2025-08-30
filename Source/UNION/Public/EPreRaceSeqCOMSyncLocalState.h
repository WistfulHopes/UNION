#pragma once
#include "CoreMinimal.h"
#include "EPreRaceSeqCOMSyncLocalState.generated.h"

UENUM(BlueprintType)
enum class EPreRaceSeqCOMSyncLocalState : uint8 {
    Idle,
    Init,
    StartCOMDataSync,
    WaitCOMDataSync,
    Exit,
};

