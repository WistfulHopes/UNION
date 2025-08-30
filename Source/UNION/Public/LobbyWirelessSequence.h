#pragma once
#include "CoreMinimal.h"
#include "LobbySequenceBase.h"
#include "LobbyWirelessSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API ALobbyWirelessSequence : public ALobbySequenceBase {
    GENERATED_BODY()
public:
    ALobbyWirelessSequence(const FObjectInitializer& ObjectInitializer);

};

