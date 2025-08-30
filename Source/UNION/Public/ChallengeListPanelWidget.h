#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Blueprint/UserWidget.h"
#include "ChallengeListPanelWidget.generated.h"

class UChallengeListButtonWidget;
class UChallengeWidgetDataAsset;
class UImage;
class UPanelWidget;
class USoundAtomCue;
class UUnionFontScroll;
class UUnionRichTextBlock;
class UUnionUIButtonBase;
class UUnionUITextBlock;
class UWidget;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UChallengeListPanelWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UChallengeWidgetDataAsset> _DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UChallengeListButtonWidget*> _Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* _PlateSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* _ContentPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _TitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionFontScroll* _ConditionTextScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUITextBlock* _ProgressTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _CompleteIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* _LockPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* _SECueChallengeChange;
    
public:
    UChallengeListPanelWidget();

private:
    UFUNCTION(BlueprintCallable)
    UWidget* OnPanelNavigation(EUINavigation InNavigation);
    
    UFUNCTION(BlueprintCallable)
    UWidget* OnButtonNavigation(EUINavigation InNavigation);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonDecided(UUnionUIButtonBase* Button);
    
};

