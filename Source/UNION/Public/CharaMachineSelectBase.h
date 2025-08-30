#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ECarStatusType.h"
#include "EMachineId.h"
#include "ECharaSelectControlState.h"
#include "EDialogResult.h"
#include "EMachinePartsType.h"
#include "EMachineSelectControlState.h"
#include "EMachineSelectMode.h"
#include "CharaMachineSelectBase.generated.h"

class UCharaMachineParamWindow;
class UCharaSelectWindow;
class UMachineColorSelectWindow;
class UMachineOptionWindow;
class UMachinePartsCharaParameter;
class UMachinePartsSelectWindow;
class UMachineTypeScrollControl;
class UMenuInputRecieveObject;
class UObject;
class UUnionUIButtonBase;
class UWidgetSwitcher;
class UWindowCharaChange;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCharaMachineSelectBase : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMOptionVisibleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMachineTypeDecisionEvent, int32, SelectedPlayerControllerIndex, ECarStatusType, SelectedMachineType, EMachineId, SelectedBaseMachineId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMachineSelectModeDelegate, int32, PlayerIndex, EMachineSelectMode, Mode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMachinePartsEventParts, int32, PlayerIndex, EMachineId, FrontPartsId, EMachineId, RearPartsId, EMachineId, TirePartsId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMachinePartsEvent, int32, InPlayerIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMachineColorEvent, int32, InPlayerIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FChangeCharaSelectModeEvent, ECharaSelectControlState, NextMode, ECharaSelectControlState, PrevMode, int32, SelectedPlayerControllerIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeCharaSelectModeEvent OnChangeCharaSelectModeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineTypeDecisionEvent OnMachineTypeDecideEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineTypeDecisionEvent OnMachineTypeCancelEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineTypeDecisionEvent OnMachineTypeScrollStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineTypeDecisionEvent OnMachineTypeScrollEndEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachinePartsEvent OnMachinePartsDecisionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachinePartsEventParts OnMachinePartsSelectEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachinePartsEventParts OnMachinePartsFocusEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachinePartsEvent OnMachinePartsCancelEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineColorEvent OnMachineColorDecisionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineColorEvent OnMachineColorSelectEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineColorEvent OnMachineColorFocusEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineColorEvent OnMachineColorCancelEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineSelectModeDelegate OnMachineSelectModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMOptionVisibleDelegate OnOptionVisible;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcherMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachinePartsCharaParameter* WBP_MachineSelect_Sub_CharaParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineTypeScrollControl* WBP_MachineSelect_Sub_TypeWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachinePartsSelectWindow* WBP_MachineSelect_Sub_PartsWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineColorSelectWindow* WBP_MachineSelect_Sub_ColorWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharaMachineParamWindow* WBP_Window_MachineParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineOptionWindow* WBP_Window_MachineOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* MenuInputReceiveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstFocusDelayTime;
    
public:
    UCharaMachineSelectBase();

    UFUNCTION(BlueprintCallable)
    void SwitchMachineSelectMode(EMachineSelectMode InMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFooterCoverColor(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMachineSelectControlState(EMachineSelectControlState InState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimMachineType();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimCharaSelect();
    
private:
    UFUNCTION(BlueprintCallable)
    void PartsWindowDialogShow();
    
    UFUNCTION(BlueprintCallable)
    void PartsWindowDialogHide(EDialogResult InResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnParamWindowFinishedAnimCallback(bool IsIn);
    
    UFUNCTION(BlueprintCallable)
    void OnParamWindowCallback(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void OnOptionWindowFinishedAnimCallback(bool IsIn);
    
    UFUNCTION(BlueprintCallable)
    void OnOptionWindowCancelCallback(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOptionWindowCallback(UObject* InObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void MachinePartsSelectWindow_OnItemSelected(EMachinePartsType InPartsType, EMachineId InPartsId);
    
    UFUNCTION(BlueprintCallable)
    void MachinePartsSelectWindow_OnItemFocused(EMachinePartsType InPartsType, EMachineId InPartsId);
    
    UFUNCTION(BlueprintCallable)
    void MachinePartsSelectWindow_OnDecisionButtonFocused();
    
    UFUNCTION(BlueprintCallable)
    void MachinePartsSelectWindow_OnDecision();
    
    UFUNCTION(BlueprintCallable)
    void MachinePartsSelectWindow_OnCancel();
    
    UFUNCTION(BlueprintCallable)
    void MachineColorSelectWindow_OnItemSelected();
    
    UFUNCTION(BlueprintCallable)
    void MachineColorSelectWindow_OnItemFocused();
    
    UFUNCTION(BlueprintCallable)
    void MachineColorSelectWindow_OnDecision();
    
    UFUNCTION(BlueprintCallable)
    void MachineColorSelectWindow_OnCancel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineTypeScrollControl* GetTypeWindow() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachinePartsSelectWindow* GetPartsWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMachineSelectControlState GetCurrentMachineSelectControlState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharaSelectControlState GetCurrentCharaSelectControlState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineColorSelectWindow* GetColorWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachinePartsCharaParameter* GetCharaParamWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWindowCharaChange* GetCharacterSkinWindow() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharaSelectWindow* GetCharacterSelectWindow() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ColorWindowOverrideNavigationRule();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharaSelectMode(ECharaSelectControlState InNewState);
    
};

