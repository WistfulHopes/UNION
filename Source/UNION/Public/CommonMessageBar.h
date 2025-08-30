#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CommonMessageBar.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCommonMessageBar : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnInAnimFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnOutAnimFinished;
    
    UCommonMessageBar();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartWaitingText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetSwitcherActiveWidgetIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWarningIconVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWaitingTextVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupDisableGadgetMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnim();
    
};

