#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MenuRacerInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UMenuRacerInterface : public UInterface {
    GENERATED_BODY()
};

class IMenuRacerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTranformForTopMenu(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTranformForLobby(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTranformForCharaMachine(int32 PlayerIndex, int32 SelectedPlayerCount);
    
};

