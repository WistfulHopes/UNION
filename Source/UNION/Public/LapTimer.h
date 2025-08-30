#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LapTimerResult.h"
#include "LapTimer.generated.h"

UCLASS(Blueprintable)
class UNION_API ULapTimer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLapTimerResult> LapResults;
    
public:
    ULapTimer();

    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void Lap(const FString& EventTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResultWithLap(float& OutSecond, TArray<FLapTimerResult>& OutLapResults) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResult(float& OutSecond) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentElapsedTime() const;
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
};

