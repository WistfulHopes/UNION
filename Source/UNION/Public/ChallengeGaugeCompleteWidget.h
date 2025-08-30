#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ChallengeGaugeCompleteWidget.generated.h"

class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UChallengeGaugeCompleteWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Complete_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Complete_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Complete_Out;
    
public:
    UChallengeGaugeCompleteWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinished_Out();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinished_In();
    
};

