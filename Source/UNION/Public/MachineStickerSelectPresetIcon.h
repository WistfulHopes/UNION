#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "UnionUIButtonBase.h"
#include "MachineStickerSelectPresetIcon.generated.h"

class UCommonTextBalloon;
class UImage;
class USoundAtomCue;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UMachineStickerSelectPresetIcon : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MLC_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Cursor_StickerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBalloon* WBP_CMN_TextBalloon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Set_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Icon_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_PresetIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DMY_PresetIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DMY_CharaIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* FocusSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* DecisionSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CancelSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* ShoulderSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BaseColorOnNotSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BaseColorOnSelected;
    
public:
    UMachineStickerSelectPresetIcon();

    UFUNCTION(BlueprintCallable)
    void ShowCursor(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool bInIsSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetNew(bool bInIsNew);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaIconVisible(bool IsVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetBalloonVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    FEventReply OnFocusReceivedImpl();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusLostImpl();
    
};

