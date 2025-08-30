#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMachineId.h"
#include "ERewardType.h"
#include "EUnionUIControlDir.h"
#include "UnionUISceneBase.h"
#include "EDialogResult.h"
#include "EMachinePartsSelectWindowMode.h"
#include "EMachinePartsType.h"
#include "MachinePartsDialogParameter.h"
#include "MachinePartsUIData.h"
#include "MachinePartsSelectWindow.generated.h"

class ADLCStoreDialogActor;
class APlayerController;
class UDecisionWidget;
class UMachinePartsScrollBox;
class UMachinePartsTextBalloonGroup;
class UReadyWidget;
class URewardDialog;
class URichTextBlock;
class UUnionUIButtonBase;
class UVerticalBox;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UMachinePartsSelectWindow : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPartsDelegate, EMachinePartsType, InPartsType, EMachineId, InPartsId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPadUpDelegate, int32, PlayerIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPadLeftDelegate, int32, PlayerIndex, bool, OnDown);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogResultDelegate, EDialogResult, Result);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartsDelegate OnItemFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartsDelegate OnItemSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnDecision;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnDecisionButtonFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnDialogShow;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogResultDelegate OnDialogHide;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TXT_TypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VBScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_Balloon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachinePartsTextBalloonGroup* WBP_MachineSelect_Sub_PartsScrollBox_TextBalloon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachinePartsTextBalloonGroup* WBP_MachineSelect_Sub_ReleaseDate_TextBalloon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecisionWidget* WBP_MachineSelect_Sub_Btn_OK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReadyWidget* WBP_MachineSelect_Sub_Ready;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMachinePartsSelectWindowMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> TextBalloonPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DecisionButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoFocusEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayShoulderSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachinePartsDialogParameter DialogParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URewardDialog* Dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADLCStoreDialogActor* DLCDialog;
    
public:
    UMachinePartsSelectWindow();

private:
    UFUNCTION(BlueprintCallable)
    void TireScrollBox_OnItemSelected();
    
    UFUNCTION(BlueprintCallable)
    void TireScrollBox_OnItemFocused(UUnionUIButtonBase* InButton);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupInternal();
    
    UFUNCTION(BlueprintCallable)
    void SetFocusToFirstSelectedItem();
    
    UFUNCTION(BlueprintCallable)
    void SetFocusByPartsTypeAndId(EMachinePartsType InPartsType, EMachineId InPartsId);
    
    UFUNCTION(BlueprintCallable)
    void ScrollImmediately();
    
private:
    UFUNCTION(BlueprintCallable)
    void ScrollBox_OnEscape(UMachinePartsScrollBox* InSender, EUnionUIControlDir InDirection);
    
    UFUNCTION(BlueprintCallable)
    void ScrollBox_OnCancel();
    
    UFUNCTION(BlueprintCallable)
    void RearScrollBox_OnItemSelected();
    
    UFUNCTION(BlueprintCallable)
    void RearScrollBox_OnItemFocused(UUnionUIButtonBase* InButton);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDialogEventResult(EDialogResult InResult);
    
    UFUNCTION(BlueprintCallable)
    void OnDialogEventDelete();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogEventCreateUnlock(const FMachinePartsUIData& InPartsData, ERewardType rewardType);
    
    UFUNCTION(BlueprintCallable)
    void OnDialogEventCreatePrice(const FMachinePartsUIData& InPartsData, ERewardType rewardType);
    
    UFUNCTION(BlueprintCallable)
    void OnDialogEventCreateDLC();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    URewardDialog* OnCreateRewardDialog() const;
    
    UFUNCTION(BlueprintCallable)
    void GetUnready();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSelectedPartsIds(EMachineId& OutFrontPartsId, EMachineId& OutRearPartsId, EMachineId& OutTirePartsId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReadyWidget* GetReadyWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void GetReady();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerController() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void GetFocusedPartsIdAndType(EMachineId& OutMachineId, EMachinePartsType& OutMachinePartsType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentPartsIds(EMachineId& OutFrontPartsId, EMachineId& OutRearPartsId, EMachineId& OutTirePartsId) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FrontScrollBox_OnItemSelected();
    
    UFUNCTION(BlueprintCallable)
    void FrontScrollBox_OnItemFocused(UUnionUIButtonBase* InButton);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeleteDialogDLC(bool IsAccept);
    
private:
    UFUNCTION(BlueprintCallable)
    void DecisionButton_OnFocus(UUnionUIButtonBase* Button);
    
    UFUNCTION(BlueprintCallable)
    void DecisionButton_OnDirection(UUnionUIButtonBase* Button, EUnionUIControlDir Dir);
    
    UFUNCTION(BlueprintCallable)
    void DecisionButton_OnDecision(UUnionUIButtonBase* Button);
    
    UFUNCTION(BlueprintCallable)
    void DecisionButton_OnCancel(UUnionUIButtonBase* Button);
    
};

