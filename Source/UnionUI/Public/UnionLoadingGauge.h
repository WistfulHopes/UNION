#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EUnionLoadingGaugeState.h"
#include "UnionLoadingGauge.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNIONUI_API UUnionLoadingGauge : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionLoadingGaugeState LoadingGaugeNowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionLoadingGaugeState LoadingGaugeTargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeAnimationRate;
    
    UUnionLoadingGauge();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLoadingGaugeTargetState(EUnionLoadingGaugeState InTargetState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkipNowState();
    
    UFUNCTION(BlueprintCallable)
    void ProceedTargetState();
    
    UFUNCTION(BlueprintCallable)
    bool IsTargetStateBigger();
    
    UFUNCTION(BlueprintCallable)
    bool IsSkipLoadingGaugeState();
    
    UFUNCTION(BlueprintCallable)
    bool IsEqLoadingGaugeState();
    
};

