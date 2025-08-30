#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnionRaceTime.h"
#include "UnionRaceLapInfo.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UUnionRaceLapInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LapCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionRaceTime m_LastStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionRaceTime m_CurentLapTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionRaceTime m_LastLapTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionRaceTime m_BestLapTime;
    
    UUnionRaceLapInfo();

    UFUNCTION(BlueprintCallable)
    void GetLastLapTimeValue(int32& MinuteValue, int32& SecondValue, int32& MilliSecondValue);
    
    UFUNCTION(BlueprintCallable)
    static float GetLapTimeFloat(FUnionRaceTime Time);
    
    UFUNCTION(BlueprintCallable)
    void GetCurentLapTimeValue(int32& MinuteValue, int32& SecondValue, int32& MilliSecondValue);
    
    UFUNCTION(BlueprintCallable)
    void GetBestLapTimeValue(int32& MinuteValue, int32& SecondValue, int32& MilliSecondValue);
    
};

