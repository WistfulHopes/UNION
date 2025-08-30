#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EMenuSequenceMainState.h"
#include "EMenuSequenceSubState.h"
#include "MenuSequenceUIInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UMenuSequenceUIInterface : public UInterface {
    GENERATED_BODY()
};

class IMenuSequenceUIInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextSubMenuSequenceState(EMenuSequenceSubState InState, UObject* PrevSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextMenuSequenceState(EMenuSequenceMainState InState, UObject* PrevSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* GetOwnerMenuSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* GetFooter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableInputPlayerController(const bool Enable);
    
};

