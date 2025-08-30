#pragma once
#include "CoreMinimal.h"
#include "PackageRingVariationRateData.h"
#include "RacerRankPackageRingVariationRateData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRacerRankPackageRingVariationRateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPackageRingVariationRateData> ListByRacerRank;
    
    FRacerRankPackageRingVariationRateData();
};

