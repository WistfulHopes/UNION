#pragma once
#include "CoreMinimal.h"
#include "EPreRaceSeqErrorCode.generated.h"

UENUM(BlueprintType)
enum class EPreRaceSeqErrorCode : uint8 {
    None,
    Timeout,
    PeerCountZero,
    InvalidLobby,
    Unknown = 255,
};

