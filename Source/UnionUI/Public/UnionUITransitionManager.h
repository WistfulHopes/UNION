#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Components/SlateWrapperTypes.h"
#include "ELoadingDisplayType.h"
#include "ERivalTransitionType.h"
#include "EUnionUIFadeColor.h"
#include "EUnionUIFadeDirection.h"
#include "OnFinishedFadeDelegate.h"
#include "OnFinishedFadeSingleDelegate.h"
#include "UnionUITransitionManager.generated.h"

class UUnionUICrossFade;
class UUnionUIFade;
class UUnionUILoadingDisplay;
class UUnionUIMovieTransition;
class UUnionUIRivalTransition;
class UUserWidget;

UCLASS(Blueprintable)
class UNIONUI_API UUnionUITransitionManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedFade OnFinishedFade;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedFade OnFinishedSubFade;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIFade* FadeWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIFade* SubFadeWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* LastDisplayedSceneUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUICrossFade* CrossFadeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIMovieTransition* MovieTransitionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUILoadingDisplay* LoadingDisplayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIRivalTransition* RivalTransitionWidget;
    
public:
    UUnionUITransitionManager();

    UFUNCTION(BlueprintCallable)
    void StartSubFade(EUnionUIFadeColor FadeColor, EUnionUIFadeDirection FadeDirection, FOnFinishedFadeSingle OnFinished);
    
    UFUNCTION(BlueprintCallable)
    void StartRivalTransition();
    
    UFUNCTION(BlueprintCallable)
    void StartLoopFade(EUnionUIFadeColor FadeColor);
    
    UFUNCTION(BlueprintCallable)
    void StartFade(EUnionUIFadeColor FadeColor, EUnionUIFadeDirection FadeDirection, FOnFinishedFadeSingle OnFinished);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldCheckFadeIgnoreInput(bool ShouldIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SetRivalTransitionType(const ERivalTransitionType TransitionType);
    
    UFUNCTION(BlueprintCallable)
    void SetLastDisplayedSceneUIVisible(bool bRemove, ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetLastDisplayedSceneUI(UUserWidget* InLastDisplayedSceneUI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingFade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastFadeDirectionOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastFadeDirectionIn() const;
    
    UFUNCTION(BlueprintCallable)
    UUnionUIFade* GetUIFadeWidget();
    
    UFUNCTION(BlueprintCallable)
    UUnionUIRivalTransition* GetRivalTransitionWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNowLoadingZOrder();
    
    UFUNCTION(BlueprintCallable)
    UUnionUIMovieTransition* GetMovieTransitionWidget();
    
    UFUNCTION(BlueprintCallable)
    UUnionUILoadingDisplay* GetLoadingDisplayWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELoadingDisplayType GetLoadingDisplayType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUnionUIFadeColor GetLastFadeColor() const;
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetLastDisplayedSceneUI();
    
    UFUNCTION(BlueprintCallable)
    UUnionUICrossFade* GetCrossFadeWidget();
    
    UFUNCTION(BlueprintCallable)
    void ForceCallFinishedFadeEvent();
    
private:
    UFUNCTION(BlueprintCallable)
    void FinishSubFade(EUnionUIFadeDirection FadeDirection);
    
    UFUNCTION(BlueprintCallable)
    void FinishFade(EUnionUIFadeDirection FadeDirection);
    
public:
    UFUNCTION(BlueprintCallable)
    void DestroyRivalTransitionWidget();
    
    UFUNCTION(BlueprintCallable)
    void DestroyMovieTransitionWidget();
    
    UFUNCTION(BlueprintCallable)
    void DestroyLoadingDisplayWidget();
    
    UFUNCTION(BlueprintCallable)
    void DestroyCrossFadeWidget();
    
    UFUNCTION(BlueprintCallable)
    UUnionUIRivalTransition* CreateRivalTransitionWidget();
    
    UFUNCTION(BlueprintCallable)
    UUnionUIMovieTransition* CreateMovieTransitionWidget();
    
    UFUNCTION(BlueprintCallable)
    UUnionUILoadingDisplay* CreateLoadingDisplayWidget(ELoadingDisplayType CreateType);
    
    UFUNCTION(BlueprintCallable)
    UUnionUICrossFade* CreateCrossFadeWidget();
    
    UFUNCTION(BlueprintCallable)
    void AutoStartLoopFade();
    
    UFUNCTION(BlueprintCallable)
    void AutoReverseFade();
    
};

