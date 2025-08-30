#pragma once
#include "CoreMinimal.h"
#include "EDialogResult.h"
#include "MachineCustomizePage.h"
#include "MachineCustomizeHornSelectState.generated.h"

class UMachineCustomizeCustomList;
class UMachineHornComponent;
class URewardDialog;
class UUnionUIButtonBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineCustomizeHornSelectState : public UMachineCustomizePage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DialogButtonTextYes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DialogButtonTextNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DialogButtonTextOK;
    
public:
    UMachineCustomizeHornSelectState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySoundPossible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySoundImpossible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMachineHornComponent* GetHornComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineCustomizeCustomList* GetCustomList() const;
    
    UFUNCTION(BlueprintCallable)
    void EventUnfocus(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void EventShowNewButton(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void EventFocus(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void EventDecision(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void EventCancel(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void DialogCallback(EDialogResult InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    URewardDialog* CreateRewardDialog();
    
};

