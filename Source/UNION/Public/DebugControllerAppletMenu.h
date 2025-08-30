#pragma once
#include "CoreMinimal.h"
#include "UnionUISceneBase.h"
#include "DebugControllerAppletMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UDebugControllerAppletMenu : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UDebugControllerAppletMenu();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatedSlots();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMasterUserPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMasterUserBack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerName(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetHelpMessages(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetHeaderMessage() const;
    
};

