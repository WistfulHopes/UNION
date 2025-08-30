#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ECharaSelectControlState.h"
#include "EDialogResult.h"
#include "EMachineSelectControlState.h"
#include "CharaMachineSelectsBase.generated.h"

class UCharaMachineParamWindow;
class UCharaMachineSelectBase;
class UCharaSelectWindow;
class UCommonCountNumberWidget;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCharaMachineSelectsBase : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharaSeqEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharaFocusEvent, int32, SelectedPlayerControllerIndex, int32, SelectedCharaIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharaDecideEvent, int32, SelectedPlayerControllerIndex, int32, SelectedCharaIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaDecideEvent OnCharaDecideEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaFocusEvent OnCharaFocusEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaSeqEvent OnCharaFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaSeqEvent OnCharaCancelBackEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharaSelectWindow* WBP_CharaSelect_Sub_Window;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonCountNumberWidget* WBP_CMN_GadgetCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharaMachineUpdateDelay;
    
public:
    UCharaMachineSelectsBase();

    UFUNCTION(BlueprintCallable)
    void UpdateDonpaTicket();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SkinWindow_Button_Event_UpdateNew_Impl();
    
    UFUNCTION(BlueprintCallable)
    void SkinWindow_Button_Event_HoverIcon_Impl(int32 InPlayerIndex, int32 InCharaIndex);
    
    UFUNCTION(BlueprintCallable)
    void SkinWindow_Button_Event_Decision_Impl(int32 InPlayerControllerIndex, int32 InCharaIndex);
    
    UFUNCTION(BlueprintCallable)
    void SkinWindow_Button_Event_Cancel_Impl(int32 InPlayerIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleDonpaTicket(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetDataSaveRequest(bool bInRequest);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCharaMachineSelectWidget(const TArray<UCharaMachineSelectBase*>& InCharaMachineSelects);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySoundError();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimationOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimationNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimationIn();
    
    UFUNCTION(BlueprintCallable)
    void OnMachinePartsDialogResult(EDialogResult InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInit();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDataSaveRequest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharaMachineSelectBase* GetCharaMachineSelectWidgetByPlayerControllerIndex(int32 PlayerControllerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UCharaMachineSelectBase*> GetCharaMachineSelectWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharaMachineParamWindow* GetCharaMachineParamWindowByPlayerControllerIndex(int32 PlayerControllerIndex) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CharaSelect_Event_ChangeOptionVisible_Impl();
    
    UFUNCTION(BlueprintCallable)
    void CharaSelect_Event_ChangeMode_Impl(ECharaSelectControlState InNextMode, ECharaSelectControlState InPrevMode, int32 InPlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    void CharaSelect_Button_Event_Update_New_Impl();
    
    UFUNCTION(BlueprintCallable)
    void CharaSelect_Button_Event_UnhoverIcon_Impl(int32 InPlayerIndex, int32 InCharaIndex);
    
    UFUNCTION(BlueprintCallable)
    void CharaSelect_Button_Event_HoverIcon_Impl(int32 InPlayerIndex, int32 InCharaIndex);
    
    UFUNCTION(BlueprintCallable)
    void CharaSelect_Button_Event_Decision_Impl(int32 InPlayerControllerIndex, int32 InCharaIndex);
    
    UFUNCTION(BlueprintCallable)
    void CharaSelect_Button_Event_Cancel_Impl(int32 InPlayerControllerIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeSelectMode(EMachineSelectControlState InNewState);
    
};

