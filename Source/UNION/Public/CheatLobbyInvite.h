#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMenuSequenceMainState.h"
#include "CheatLobbyInvite.generated.h"

UCLASS(Blueprintable)
class UNION_API UCheatLobbyInvite : public UObject {
    GENERATED_BODY()
public:
    UCheatLobbyInvite();

    UFUNCTION(BlueprintCallable, Exec)
    void SetLobbyInvited();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCheatLobbyInviteSequence(EMenuSequenceMainState NextState);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MinusBusyFlag();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddBusyFlag();
    
};

