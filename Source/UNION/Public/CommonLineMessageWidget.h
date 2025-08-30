#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CommonLineMessageWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCommonLineMessageWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisplayEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisplayEndDelegate DisplayEndDelegate;
    
    UCommonLineMessageWidget();

    UFUNCTION(BlueprintCallable)
    void StartDisplayTimeCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMessageText(const FText& InMessageText);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayTime(float InDisplayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationIn();
    
    UFUNCTION(BlueprintCallable)
    void EndDisplayTimeCount();
    
};

