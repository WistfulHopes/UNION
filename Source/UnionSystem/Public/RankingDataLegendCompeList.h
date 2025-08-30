#pragma once
#include "CoreMinimal.h"
#include "RankingDataLegendCompe.h"
#include "RankingDataLegendCompeList.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FRankingDataLegendCompeList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRankingDataLegendCompe> RankingData;
    
    FRankingDataLegendCompeList();
};

