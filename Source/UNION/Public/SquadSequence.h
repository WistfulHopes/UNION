#pragma once
#include "CoreMinimal.h"
#include "ESquadSequenceState.h"
#include "LobbySequenceBase.h"
#include "SquadSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API ASquadSequence : public ALobbySequenceBase {
    GENERATED_BODY()
public:
    ASquadSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextSquadSequenceState(ESquadSequenceState InState, ESquadSequenceState PrevState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateSquadTop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStatePlayerProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateFriendList();
    
};

