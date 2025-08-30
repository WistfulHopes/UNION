#pragma once
#include "CoreMinimal.h"
#include "UnionUISceneBase.h"
#include "MachineColorSelectWindow.generated.h"

class UDecisionWidget;
class UReadyWidget;
class USoundAtomCue;
class UUnionUIButtonBase;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UMachineColorSelectWindow : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FColorDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorDelegate OnDecision;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorDelegate OnCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorDelegate OnItemFocused;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUISceneBase* WBP_MachineCustom_Sub_PresetPaint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecisionWidget* WBP_MachineSelect_Sub_Btn_OK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReadyWidget* WBP_MachineSelect_Sub_Ready;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* DecisionSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CancelSoundCue;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DecisionButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReady;
    
    UMachineColorSelectWindow();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPlayerIndex(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemFocus(UUnionUIButtonBase* Button);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetUnready();
    
    UFUNCTION(BlueprintCallable)
    void GetReady();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DecisionButton_OnItemFocus(UUnionUIButtonBase* Button);
    
    UFUNCTION(BlueprintCallable)
    void DecisionButton_OnDecision(UUnionUIButtonBase* Button);
    
    UFUNCTION(BlueprintCallable)
    void DecisionButton_OnCancel(UUnionUIButtonBase* Button);
    
};

