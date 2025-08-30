#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ChallengeGaugeWidget.generated.h"

class UChallengeGaugeBGRootWidget;
class UChallengeGaugeChaoWidget;
class UChallengeGaugeCompleteWidget;
class UChallengeGaugePointWidget;
class UChallengeWidgetDataAsset;
class USoundAtomCue;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UChallengeGaugeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SeChaoMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SeBgChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SeBgChangeSpecial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UChallengeWidgetDataAsset> _DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _ChaoMoveVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _SpecialUnlockPopupTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _SpecialUnlockPopupMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChallengeGaugeBGRootWidget* _BGWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChallengeGaugeCompleteWidget* _CompleteWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChallengeGaugeChaoWidget* _ChaoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UChallengeGaugePointWidget*> _PointWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* PopupWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Loop_Gauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Change_To_Complete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Loop_Complete;
    
public:
    UChallengeGaugeWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnSpecialUnlockPopupClosed(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
};

