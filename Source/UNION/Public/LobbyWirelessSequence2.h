#pragma once
#include "CoreMinimal.h"
#include "LobbyFriendMatchSequence2.h"
#include "LobbyWirelessSequence2.generated.h"

class AWirelessSequence;

UCLASS(Blueprintable)
class UNION_API ALobbyWirelessSequence2 : public ALobbyFriendMatchSequence2 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWirelessSequence* WirelessSequence;
    
public:
    ALobbyWirelessSequence2(const FObjectInitializer& ObjectInitializer);

};

