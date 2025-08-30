#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "ButtonAnimFinishedEventDelegate.h"
#include "UnionUIInputWidget.h"
#include "UnionUIButtonBaseCore.generated.h"

class UButton;
class UUMGSequencePlayer;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNIONUI_API UUnionUIButtonBaseCore : public UUnionUIInputWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeableButtonState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnalogEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMouseInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* MouseInteractionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUMGSequencePlayer* CurrentButtonAnimPlayer;
    
public:
    UUnionUIButtonBaseCore();

    UFUNCTION(BlueprintCallable)
    void StartDelayEnable(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationExplicitWidget(EUINavigation Direction, UWidget* FocusToWidget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMouseInteractionButton(UButton* InMouseInteractionButton);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInteractableState(bool Interactable);
    
    UFUNCTION(BlueprintCallable)
    void SetChangeableButtonState(bool InChangeableButtonState);
    
    UFUNCTION(BlueprintCallable)
    void PlayButtonAnimationWithFinished(UWidgetAnimation* Animation, UWidgetAnimation* LoopAnimation, const FButtonAnimFinishedEvent& OnFninished);
    
    UFUNCTION(BlueprintCallable)
    void PlayButtonAnimation(UWidgetAnimation* Animation, UWidgetAnimation* LoopAnimation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUnhoverdMouseInteractionButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedMouseInteractionButton();
    
    UFUNCTION(BlueprintCallable)
    void OnHoverdMouseInteractionButton();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedMouseInteractionButton();
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetNavigationExplicitWidget(EUINavigation Direction, UWidget*& FocusToWidget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UButton* GetMouseInteractionButton();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetChangeableButtonState() const;
    
};

