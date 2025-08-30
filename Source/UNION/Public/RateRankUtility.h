#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERateRank.h"
#include "GaugePointResult.h"
#include "RateRankPoint.h"
#include "RateRankUIData.h"
#include "RateRankUtility.generated.h"

UCLASS(Abstract, Blueprintable)
class UNION_API URateRankUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URateRankUtility();

    UFUNCTION(BlueprintCallable)
    static bool IsRateRankLegend(ERateRank RateRank);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRateRank_DifferentCategory(ERateRank NowRateRank, ERateRank NextRateRank);
    
    UFUNCTION(BlueprintCallable)
    static ERateRank GetRateToRank(int32 Rate);
    
    UFUNCTION(BlueprintCallable)
    static FRateRankUIData GetRateRankUIData(ERateRank NowRateRank);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRateRankToIntRank(ERateRank NowRateRank);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRateRankPoint(const FRateRankPoint& Table, int32 Rank);
    
    UFUNCTION(BlueprintCallable)
    static ERateRank GetRateRankNext(ERateRank NowRateRank);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRateRankCategoryNo(ERateRank Rank);
    
    UFUNCTION(BlueprintCallable)
    static ERateRank GetRateRankBack(ERateRank NowRateRank);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMinPointAtRank(ERateRank InRateRank);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMaxPointAtRank(ERateRank InRateRank);
    
    UFUNCTION(BlueprintCallable)
    static ERateRank GetIntRankToRateRank(int32 IntRank);
    
    UFUNCTION(BlueprintCallable)
    static FGaugePointResult GetGaugePointUpOrDown(float Now, float RemainAdd, float Speed, float High, float Low);
    
    UFUNCTION(BlueprintCallable)
    static ERateRank GetByteRankToRateRank(uint8 ByteRank);
    
};

