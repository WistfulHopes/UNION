#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ELoadingDisplayType.h"
#include "UnionUILoadingDisplay.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNIONUI_API UUnionUILoadingDisplay : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadingEndAnimFinishedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadingDisplayHideFinishedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingEndAnimFinishedDelegate OnLoadingEndAnimFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingDisplayHideFinishedDelegate OnLoadingDisplayHideFinished;
    
    UUnionUILoadingDisplay();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLoadingPhase(int32 EndLoadingPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLoadingProgress(float LoadingProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLoadingGaugeParam(int32 LoadingPhaseNum, bool bSetProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProceedLoadingPhase();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ELoadingDisplayType GetLoadingDisplayType();
    
};

