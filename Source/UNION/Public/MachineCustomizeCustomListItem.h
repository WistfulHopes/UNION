#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "OnUnionButtonEventDelegate.h"
#include "UnionUIButtonBase.h"
#include "MachineCustomizeCustomListItem.generated.h"

class UCommonMenuControllerUI;
class UImage;
class UOverlay;
class UUnionRichTextBlock;
class UUnionUITextBlock;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UMachineCustomizeCustomListItem : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnLeftStickButtonPress;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnShowNew;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Set_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Icon_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Black;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUITextBlock* TXT_ItemCount_Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* DSP_PlayBackBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMenuControllerUI* WBP_CMN_ControllerBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor PriceTextColorActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor PriceTextColorDisable;
    
public:
    UMachineCustomizeCustomListItem();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySEFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySEDecision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySECancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationSelectLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationActiveLoop();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelect() const;
    
};

