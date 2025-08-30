#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStageId.h"
#include "AnotherStageLotteryParameter.h"
#include "AnotherStageLotteryResult.h"
#include "AnotherStageLotteryWheel.generated.h"

UCLASS(Blueprintable)
class UNION_API UAnotherStageLotteryWheel : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> IgnoreCourses;
    
public:
    UAnotherStageLotteryWheel();

    UFUNCTION(BlueprintCallable)
    void WriteLotteryResultToSettings();
    
    UFUNCTION(BlueprintCallable)
    void SetupManual(const FAnotherStageLotteryParameter& InParameter);
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void Reset(int32 InSeed);
    
    UFUNCTION(BlueprintCallable)
    TArray<FAnotherStageLotteryResult> Lot(bool bUseCache, bool bIsResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeed() const;
    
    UFUNCTION(BlueprintCallable)
    void GetLotteryResultsStageIds(TArray<EStageId>& OutStageIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAnotherStageLotteryResult> GetLotteryResults() const;
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreStages(const TArray<EStageId> NewIgnoreCourses);
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreStage(EStageId IgnoreCourse);
    
};

