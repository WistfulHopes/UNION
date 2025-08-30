#pragma once
#include "CoreMinimal.h"
#include "LobbySequenceBase.h"
#include "LobbyFriendMatchSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API ALobbyFriendMatchSequence : public ALobbySequenceBase {
    GENERATED_BODY()
public:
    ALobbyFriendMatchSequence(const FObjectInitializer& ObjectInitializer);

};

