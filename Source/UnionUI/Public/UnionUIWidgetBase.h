#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Animation/WidgetAnimationEvents.h"
#include "UnionUIWidgetBase.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UUnionUIWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvents AnimEndDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CustomActionStringArray;
    
public:
    UUnionUIWidgetBase();

    UFUNCTION(BlueprintCallable)
    void WidgetPlayAnim(int32 AnimIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<UWidgetAnimation*> GetAllAnimations();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallCustomActionbyID(int32 ActionIndex);
    
};

