#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ResultRateRankBand.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UResultRateRankBand : public UUserWidget {
    GENERATED_BODY()
public:
    UResultRateRankBand();

    UFUNCTION(BlueprintCallable)
    void SetRankMax(float InRankMax);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentRank(float InCurrentRank);
    
    UFUNCTION(BlueprintCallable)
    float GetRankMax();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentRank();
    
};

