#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CommonUserWidgetAnimFinishedDynamicEventDelegate.h"
#include "CommonUserWidget.generated.h"

class UUMGSequencePlayer;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUMGSequencePlayer* CurrentAnimPlayer;
    
public:
    UCommonUserWidget();

    UFUNCTION(BlueprintCallable)
    void StopAnimationEx();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationExBPWithFinished(UWidgetAnimation* Animation, UWidgetAnimation* LoopAnimation, const FCommonUserWidgetAnimFinishedDynamicEvent& OnFinished);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationExBP(UWidgetAnimation* Animation, UWidgetAnimation* LoopAnimation);
    
};

