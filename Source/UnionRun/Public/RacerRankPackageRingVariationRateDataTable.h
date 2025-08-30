#pragma once
#include "CoreMinimal.h"
#include "RacerRankPackageRingVariationRateData.h"
#include "RacerRankPackageRingVariationRateDataTable.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRacerRankPackageRingVariationRateDataTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRacerRankPackageRingVariationRateData VariationRateDatas_1stLap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRacerRankPackageRingVariationRateData VariationRateDatas_2ndLap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRacerRankPackageRingVariationRateData VariationRateDatas_3rdLap;
    
    FRacerRankPackageRingVariationRateDataTable();
};

