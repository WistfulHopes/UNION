#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UnionUIMovieTransition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONUI_API UUnionUIMovieTransition : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMovieTransitionSceneChangeDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMovieTransitionPlayStartDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMovieTransitionPlayEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieTransitionPlayStartDelegate OnMovieTransitionPlayStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieTransitionPlayEndDelegate OnMovieTransitionPlayEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieTransitionSceneChangeDelegate OnMovieTransitionSceneChange;
    
    UUnionUIMovieTransition();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayingMovie() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPausedMovie() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseMovie();
    
};

