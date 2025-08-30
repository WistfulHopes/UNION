#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DialogueEventInterface.generated.h"

class ADialogueEventManagerBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UDialogueEventInterface : public UInterface {
    GENERATED_BODY()
};

class IDialogueEventInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenuText(const FText& TextMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsFirstStarted(bool& Started);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsComplete(bool& Complete);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetDialogueEventManager(ADialogueEventManagerBase*& Manager);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndMenuMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Destroy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckMenuMode(bool& MenuMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallDialogueEvent(FName EventName, bool& Success);
    
};

