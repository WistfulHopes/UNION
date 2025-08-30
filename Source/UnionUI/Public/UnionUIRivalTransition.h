#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERivalTransitionType.h"
#include "OnFinishedTransitionDelegate.h"
#include "UnionUIRivalTransition.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNIONUI_API UUnionUIRivalTransition : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedTransition OnFinishedTransition;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedTransition OnFinishedTransitionEffect;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WS_Fire_Level;
    
public:
    UUnionUIRivalTransition();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopTransitionAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartTransition();
    
    UFUNCTION(BlueprintCallable)
    void SetTransitionType(ERivalTransitionType Type);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishedTransition();
    
};

