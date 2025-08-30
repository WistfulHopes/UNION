#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ChallengeGaugeBGWidget.generated.h"

class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UChallengeGaugeBGWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Gauge_BG_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Gauge_BG_Change_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Gauge_BG_Change_Out;
    
public:
    UChallengeGaugeBGWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinished_ChangeOut();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinished_ChangeIn();
    
};

