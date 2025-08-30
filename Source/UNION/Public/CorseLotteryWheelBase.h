#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStageId.h"
#include "CorseLotteryWheelBase.generated.h"

UCLASS(Blueprintable)
class UNION_API UCorseLotteryWheelBase : public UObject {
    GENERATED_BODY()
public:
    UCorseLotteryWheelBase();

    UFUNCTION(BlueprintCallable)
    void WriteLotteryResultToSettings();
    
    UFUNCTION(BlueprintCallable)
    void Reset(int32 InSeed);
    
    UFUNCTION(BlueprintCallable)
    TArray<EStageId> Lot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeed() const;
    
    UFUNCTION(BlueprintCallable)
    void GetLotteryResultsStageIds(TArray<EStageId>& OutStageIds);
    
};

