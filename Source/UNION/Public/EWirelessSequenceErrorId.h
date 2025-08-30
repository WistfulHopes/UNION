#pragma once
#include "CoreMinimal.h"
#include "EWirelessSequenceErrorId.generated.h"

UENUM(BlueprintType)
enum class EWirelessSequenceErrorId : uint8 {
    NonError,
    CommonError,
    EntryFailedError,
    NoLobby,
    SearchTimeout,
    Max,
};

