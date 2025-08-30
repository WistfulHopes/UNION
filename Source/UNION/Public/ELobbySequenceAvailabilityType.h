#pragma once
#include "CoreMinimal.h"
#include "ELobbySequenceAvailabilityType.generated.h"

UENUM(BlueprintType)
enum class ELobbySequenceAvailabilityType : uint8 {
    NormalLobbySequence,
    NotAvailableToJoinSequence,
    NotAvailableToReceiveSequence,
};

