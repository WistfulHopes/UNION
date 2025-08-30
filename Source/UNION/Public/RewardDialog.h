#pragma once
#include "CoreMinimal.h"
#include "UnionUISceneBase.h"
#include "EDialogResult.h"
#include "RewardDialogParameter.h"
#include "RewardDialog.generated.h"

class UCommonItemIcon;
class UCommonMenuPopupSubBtnStandard;
class UMachinePartsTicketNumber;
class UOverlay;
class USoundAtomCue;
class UUnionRichTextBlock;
class UUnionUIButtonBase;
class UUnionUIButtonsPanel;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API URewardDialog : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogResultDelegate, EDialogResult, Result);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogResultDelegate OnResultDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonItemIcon* WBP_CMN_ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcherText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_MainTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_MainTitle_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_MainTitle_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_SourceNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachinePartsTicketNumber* WBP_DonpaTicketApp_Sub_TicketNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMenuPopupSubBtnStandard* WBP_Popup_Sub_Btn_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMenuPopupSubBtnStandard* WBP_Popup_Sub_Btn_04;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundCueYes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundCueNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundCueCancel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* ButtonsPanel;
    
public:
    URewardDialog();

    UFUNCTION(BlueprintCallable)
    void SetupYesNo(const FRewardDialogParameter& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetupOK(const FRewardDialogParameter& InParam);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationIn();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDecisionYesNo(UUnionUIButtonBase* Button, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelYesNo(UUnionUIButtonBase* Button, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelOK(UUnionUIButtonBase* Button, int32 ButtonIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonMenuPopupSubBtnStandard* GetButtonYes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonMenuPopupSubBtnStandard* GetButtonNo() const;
    
    UFUNCTION(BlueprintCallable)
    void AnimationEndOut();
    
    UFUNCTION(BlueprintCallable)
    void AnimationEndIn();
    
};

