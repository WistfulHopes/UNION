#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EUnionUIFadeColor.h"
#include "EUnionUIFadeDirection.h"
#include "OnFinishedFadeDelegate.h"
#include "UnionUIFade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONUI_API UUnionUIFade : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedFade OnFinishedFade;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedFade OnFinishedFadeInternal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionUIFadeColor LastFadeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionUIFadeDirection LastFadeDirection;
    
    UUnionUIFade();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLoopFade(EUnionUIFadeColor FadeColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartFade(EUnionUIFadeColor FadeColor, EUnionUIFadeDirection FadeDirection);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishedFade(EUnionUIFadeDirection FadeDirection);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AutoStartLoopFade();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AutoReverseFade();
    
};

