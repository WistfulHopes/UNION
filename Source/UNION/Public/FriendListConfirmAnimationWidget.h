#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FriendListConfirmAnimationWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UFriendListConfirmAnimationWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAnimationOutFinishedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimationOutFinishedDelegate AnimationOutFinishedDelegate;
    
    UFriendListConfirmAnimationWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationOut(bool bInSend);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationIn(bool bInReception);
    
};

